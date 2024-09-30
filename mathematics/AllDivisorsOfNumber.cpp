#include <iostream>
using namespace std;
// method 1
void printDivisors(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
      cout << i << " ";
  }
}

// method 2
void printDivisorsEfficient(int n)
{
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
      if (i != n / i)
        cout << n / i << " ";
    }
  }
}

// method3
// for printing in correct order
void pritnDivisorsEfficientOrderly(int n)
{
  int i;
  for (i = 1; i * i < n; i++)
  {
    if (n % i == 0)
      cout << i << " ";
    //prints all divisors from 1(inclusive) to sqrt(n)(exclusive)
  } 
  for (; i >= 1; i--)
  {
    if (n % i == 0)
      cout << n / i << " ";
    //prints all divisors from sqrt(n)(inclusive) to n(inclusive);
  }
}