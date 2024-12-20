// generate and print all permutaions of string which do not contain "AB" as substring

#include <bits/stdc++.h>
using namespace std;

void permuteNaive(string str, int l, int r)
{

  if (l == r)
  {
    if (str.find("AB") == string::npos)
    {
      cout << str << " ";
    }
    return;
  }
  else
  {
    for (int i = l; i <= r; i++)
    {
      swap(str[i], str[l]);
      permuteNaive(str, l + 1, r);
      swap(str[i], str[l]);
    }
  }
}

// using Backtracking
bool isSafe(string str, int l, int i, int r)
{
  if (l != 0 && str[l - 1] == 'A' && str[i] == 'B')
    return false;
  if (r == (l + 1) && str[i] == 'A' && str[l] == 'B')
    return false;
  return true;
}

void permuteBacktrack(string str, int l, int r)
{

  if (l == r)
  {
    cout << str << " ";
    return;
  }
  else
  {
    for (int i = l; i <= r; i++)
    {
      if (isSafe(str, l, i, r))
      {
        swap(str[i], str[l]);
        permuteBacktrack(str, l + 1, r);
        swap(str[i], str[l]);
      }
    }
  }
}

int main()
{
  string str = "ABC";
  permuteNaive(str, 0, str.length() - 1);
  permuteBacktrack(str, 0, str.length() - 1);
  return 0;
}