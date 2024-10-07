#include <bits/stdc++.h>
using namespace std;

bool myCmp(pair<int,int>a,pair<int,int>b){
  return (a.second < b.second);
}

int MaxActivities(pair<int,int> arr[],int n){
  sort(arr,arr+n,myCmp);
  int prev=0,res=1;
  for(int curr=1;curr<n;curr++){
    if(arr[curr].first>=arr[prev].second){
      res++;
      prev=curr;
    }
  }
  return res;
}
