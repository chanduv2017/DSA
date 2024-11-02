package Tree;

class Node  
{ 
  int key; 
  Node left; 
  Node right; 
  Node(int k){
      key=k;
      left=right=null;
  }
}


class checkForBalancedTree { 
    
    public static void main(String args[]) 
    { 
        Node root=new Node(10);
    	root.left=new Node(5);
    	root.right=new Node(30);
    	root.right.left=new Node(15);
    	root.right.right=new Node(20);
    	
    } 
    
    public static boolean isBalancedNaive(Node root){
        if(root==null)
            return true;
        int lh=height(root.left);
        int rh=height(root.right);
        return (Math.abs(lh-rh)<=1 && isBalancedNaive(root.left) && isBalancedNaive(root.right));
    }
    
    public static int height(Node root){
        if(root==null)
            return 0;
        else
            return (1+Math.max(height(root.left),height(root.right)));
    }
    public static int isBalancedOptimised(Node root){
      if(root==null)
          return 0;
      int lh=isBalancedOptimised(root.left);
      if(lh==-1)return -1;
      int rh=isBalancedOptimised(root.right);
      if(rh==-1)return -1;
      
      if(Math.abs(lh-rh)>1)
          return -1; 
      else
          return Math.max(lh,rh)+1;
  }
}


