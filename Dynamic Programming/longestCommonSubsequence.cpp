#include <bits/stdc++.h>
using namespace std;
// method 1 recursion
int NaiveLCS(string s1, string s2, int m, int n)
{
  if (m == 0 || n == 0)
  {
    return 0;
  }
  if (s1[m - 1] == s2[n - 1])
  {
    return 1 + NaiveLCS(s1, s2, m - 1, n - 1);
  }
  else
  {
    return max(NaiveLCS(s1, s2, m - 1, n), NaiveLCS(s1, s2, m, n - 1));
  }
}

// method 2 meomoisation
class Memoisation
{
  vector<vector<int>> memo;
  Memoisation(int m, int n)
  {
    memo.resize(m, vector<int>(n, 0));
  }
  int lcs(string s1, string s2, int m, int n)
  {
    if (memo[m][n] != -1)
      return memo[m][n];
    if (m == 0 || n == 0)
    {
      memo[m][n] = 0;
    }
    else
    {
      if (s1[m - 1] == s2[n - 1])
      {
        memo[m][n] = 1 + lcs(s1, s2, m - 1, n - 1);
      }
      else
      {
        memo[m][n] = max(lcs(s1, s2, m, n - 1), lcs(s1, s2, m - 1, n));
      }
    }
    return memo[m][n];
  }
};
// method 3 tabulation
class Tabulation
{
  int lcs(string s1, string s2)
  {
    int m = s1.length(), n = s2.length();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
      dp[i][0] = 0;
    }
    for (int j = 0; j <= n; j++)
    {
      dp[0][j] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (s1[i - 1] == s2[j - 1])
        {
          dp[i][j] = 1 + dp[i - 1][j - 1];
        }
        else
        {
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
      }
    }
    return dp[m][n];
  }
};

// variations of lcs
// differences btw files
// minimum insertions and deletions to convert s1 to s2

// shortest common supersequence -> shortest string which is subsequence to both stings
//  ex:GEEK GEFK
//  lcs=GEK
//  ans is GEEFK 3+1+1=5

// longest palindromic subsequence // compare LCS of string with its reverse string

// longest repeating subsequence
// ex:AABB ans=2
// find lcs of AABB with AABB with 1 conditions i!=j

// space optimsed DP solution of LCS
// printing LCS
