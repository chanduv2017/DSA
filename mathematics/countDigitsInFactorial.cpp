#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N){
  double x=0;
  for(int i=N;i>1;i--){
    x+=log10(i);
  }
  int y=int(x)+1; //int y=1+floor(x);
  return y;
}

//return number of digits in n!
//count of digits in a number=floor(log10(x))+1
//log(n!)=log1 + log2+ .... +logn
//log(axb)=log a + log b