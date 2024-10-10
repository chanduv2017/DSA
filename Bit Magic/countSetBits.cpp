#include <bits/stdc++.h>
using namespace std;

int CountSetBits(int n)
{
  int res = 0;
  while (n > 0)
  {
    // if(n%2==1) res++;
    res += n & 1;
    n = n / 2;
  }
  return res;
}
// TC -> O(d)
// d-> number of bits from LSB to MSB

// Brain Kerningum's Algorithm
// traverse only the set bits
int CountSetBits(int n)
{
  int res = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    res = res + 1;
  }
  return res;
}

// lookup table solution
int tbl[256];
void lookUpTable()
{
  tbl[0] = 0;
  for (int i = 0; i < 256; i++)
  {
    tbl[i] = tbl[i & (i - 1)] + 1; // tbl[i]= (i&1) + tbl[i/2];
  }
}
int countSetBits(int n)
{
  return tbl[n & 255] + tbl[(n >> 8) & 256] + tbl[((n >> 16) & 255)] + tbl[(n >> 24)];
}