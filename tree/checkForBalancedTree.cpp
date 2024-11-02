//height balanced tree
//for every node , the difference between heights of left subtree and righ subtree should be less than or equal to one

#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int height(Node *root){
    if(root==NULL)
        return 0;
    else
        return (1+max(height(root->left),height(root->right)));
}

bool isBalancedNaive(Node *root){//T.C-> O(n^2)
    if(root==NULL)
        return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && isBalancedNaive(root->left) && isBalancedNaive(root->right));
}



int isBalancedOptimised(Node *root){//T.C-> O(n)
    if(root==NULL)
        return 0;
    int lh=isBalancedOptimised(root->left);
    if(lh==-1)return -1;
    int rh=isBalancedOptimised(root->right);
    if(rh==-1)return -1;
    
    if(abs(lh-rh)>1)
        return -1; 
    else
        return max(lh,rh)+1;
}