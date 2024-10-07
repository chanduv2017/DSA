//leetcode 207

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<int> in(n,0),adj[n];
        for(auto &i:edges){
            adj[i[0]].push_back(i[1]);
            in[i[1]]++;
        }
        int c=0;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(in[i]==0)q.push(i);
        }
        if(q.size()==0)return 0;
        while(!q.empty()){
            int t=q.front();q.pop();c++;
            for(auto &i:adj[t]){
                in[i]--;
                if(in[i]==0)q.push(i);
            }
        }
        return c==n;
    }
};

// class Solution {
// public:
//     bool isCyclicUtil(vector<vector<int>>& adj, int u, 
//                   vector<bool>& visited, vector<bool>& recStack) {
  
//     if (!visited[u]) {
      
//         visited[u] = true;
//         recStack[u] = true; 

//         for (int x : adj[u]) {
//             if (!visited[x] && 
//                 isCyclicUtil(adj, x, visited, recStack))
//                 return true;
//             else if (recStack[x])
//                 return true;
//         }
//     }

//     recStack[u] = false;
//     return false;
// }

//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         vector<vector<int>>adj(numCourses);
//         for(auto x:prerequisites){
//             adj[x[0]].push_back(x[1]);
//         }
//         vector<bool> visited(numCourses, false);
//     vector<bool> recStack(numCourses, false);

//     for (int i = 0; i < numCourses; i++) {
//         if (!visited[i] && 
//             isCyclicUtil(adj, i, visited, recStack))
//             return false;
//     }

//     return true;
//     }
// };