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


class diameterOfBinaryTree { 
    
    public static void main(String args[]) 
    { 
        Node root=new Node(10);
    	root.left=new Node(20);
    	root.right=new Node(30);
    	root.right.left=new Node(40);
    	root.right.right=new Node(60);
	    root.right.left.left=new Node(50);
	    root.right.right.right=new Node(70);
    	
    	System.out.print(diameter(root));
    } 
    
    public static int height(Node root){
        if(root==null)
            return 0;
        else
            return (1+Math.max(height(root.left),height(root.right)));
    }  
    
    public static int diameter(Node root){
        if(root==null)return 0;
        int d1=1+height(root.left)+height(root.right);
        int d2=diameter(root.left);
        int d3=diameter(root.right);
        
        return Math.max(d1,Math.max(d2,d3));
    }
} 

//efficient approach


class diameterOfBinaryTreeEfficient { 
    
    public static void main(String args[]) 
    { 
        Node root=new Node(10);
    	root.left=new Node(20);
    	root.right=new Node(30);
    	root.right.left=new Node(40);
    	root.right.right=new Node(60);
	    root.right.left.left=new Node(50);
	    root.right.right.right=new Node(70);
    	
    	System.out.println("Height: "+height(root));
    	System.out.println("Diameter: "+res);
    } 
    static int res=0;
    public static int height(Node root){
        if(root==null)
            return 0;
        int lh=height(root.left);
        int rh=height(root.right);
        res=Math.max(res,1+lh+rh);
        
        return 1+Math.max(lh,rh);
    }  
} 