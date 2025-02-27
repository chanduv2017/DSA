package Tree;

import java.util.*;

class Node {
  int key;
  Node left;
  Node right;

  Node(int k) {
    key = k;
    left = right = null;
  }
}

class bfs {

  public static void main(String args[]) {
    Node root = new Node(10);
    root.left = new Node(20);
    root.right = new Node(30);
    root.left.left = new Node(40);
    root.left.right = new Node(50);
    root.right.left = new Node(60);
    root.right.right = new Node(70);

    levelOrderTraversal(root);
  }

  public static void levelOrderTraversal(Node root) {
    if (root == null)
      return;
    Queue<Node> q = new LinkedList<>();
    q.add(root);
    while (q.isEmpty() == false) {
      Node curr = q.poll();
      System.out.print(curr.key + " ");
      if (curr.left != null)
        q.add(curr.left);
      if (curr.right != null)
        q.add(curr.right);
    }
  }

  public static void levelOrderTraversal1(Node root) {
    if (root == null)
      return;
    Queue<Node> q = new LinkedList<>();
    q.add(root);
    q.add(null);
    while (q.size() > 1) {
      Node curr = q.poll();
      if (curr == null) {
        System.out.println();
        q.add(null);
        continue;
      }
      System.out.print(curr.key + " ");
      if (curr.left != null)
        q.add(curr.left);
      if (curr.right != null)
        q.add(curr.right);
    }
  }

  public static void levelOrderTraversal2(Node root) {
    if (root == null)
      return;
    Queue<Node> q = new LinkedList<>();
    q.add(root);
    while (q.isEmpty() == false) {
      int count = q.size();
      for (int i = 0; i < count; i++) {
        Node curr = q.poll();
        System.out.print(curr.key + " ");
        if (curr.left != null)
          q.add(curr.left);
        if (curr.right != null)
          q.add(curr.right);
      }
      System.out.println();
    }
  }
}