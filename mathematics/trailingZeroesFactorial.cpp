// we need to find no of trailing zeroes in a factorial of number

#include <bits/stdc++.h>
using namespace std;

int countTrailingZeroesInFactorial(int n){
    int res = 0;
    for (int i = 5; i <= n; i * 5)
    {
        res = res + (n / (i * 5));
    }
    return res;
}

//trailing zeroes count= floor(n/5)+floor(n/25)+ floor(n/125)+ ......
//every fifth number is going to have five as prime factor
//less number of 5's than 2's
//atleast floor(n/5) fives in prime factorization

//T.C theta(log(N))