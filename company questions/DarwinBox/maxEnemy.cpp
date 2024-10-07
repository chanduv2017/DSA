#include<bits/stdc++.h>
using namespace std;

char grid[500][500];
int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>grid[i][j];
    }
    vector<vector<int>> g(n,vector<int>(m,0));
    for(int i=0;i<n;i++){int t=0;
        for(int j=0;j<m;j++){
            if(grid[i][j]=='W')t=0;
            else if(grid[i][j]=='E')t++;
            g[i][j]+=t;
        }t=0;
        for(int j=m-1;j>=0;j--){
            if(grid[i][j]=='W')t=0;
            else if(grid[i][j]=='E')t++;
            g[i][j]+=t;
    }}
     for(int j=0;j<m;j++){int t=0;
        for(int i=0;i<n;i++){
            if(grid[i][j]=='W')t=0;
            else if(grid[i][j]=='E')t++;
            g[i][j]+=t;
        }t=0;
        for(int i=n-1;i>=0;i--){
            if(grid[i][j]=='W')t=0;
            else if(grid[i][j]=='E')t++;
            g[i][j]+=t;
    }}
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='0')res=max(res,g[i][j]);
    }}
    cout<<res;
}