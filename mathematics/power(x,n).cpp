#include <iostream>
using namespace std;
// naive
int power(int x, int n)
{
  int res = 1;
  for (int i = 0; i < n; i++)
  {
    res = res * x;
  }
  return res;
}
// efficient
int power(int x, int n)
{
  if (n == 0)
    return 1;
  int temp = power(x, n / 2);
  temp = temp * temp;
  if (n % 2 == 0)
    return temp;
  return temp * x;
}//T.C: O(log(n))

// iterative power(Binary Exponentiation)
int power(int x, int n)
{
  int res = 1;
  while (n > 0)
  {
    if (n % 2 != 0) // if(n&1)
    {
      res = res * x;
    }
    x = x * x;
    n = n / 2; // n=n>>1;
  }
  return res;
}
//T.C: O(log(n))