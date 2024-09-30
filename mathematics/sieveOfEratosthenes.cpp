#include <iostream>
using namespace std;

// prints numbers less than or equal to given number

// naive solution
bool isPrime(int n)
{
  if (n == 1)
    return false;
  if (n == 2 || n == 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (int i = 5; i * i <= n; i = i + 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}
void printPrimes(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (isPrime(i))
      cout << i << " ";
  }
}
// T.C : O(n.sqrt(n))

// sieve solution

void sieve(int n)
{
  vector<bool> isPrime(n + 1, true);
  for (int i = 2; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      for (int j = 2 * i; j <= n; j = j + i)
      {
        isPrime[j] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      cout << i << " ";
    }
  }
}
// optimized sieve
// replace j=2*i by j=i*i
void sieve(int n)
{
  vector<bool> isPrime(n + 1, true);
  for (int i = 2; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= n; j = j + i)
      {
        isPrime[i] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      cout << i << " ";
    }
  }
}

// shorter implementation of optimised sieve
void sieve(int n)
{
  vector<bool> isPrime(n + 1, true);
  for (int i = 2; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      cout << i << " ";
      for (int j = i * i; j <= n; j = j + i)
      {
        isPrime[j] = false;
      }
    }
  }
}