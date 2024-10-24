package SinglyLinkedList;

class Node {
  int data;
  Node next;

  public Node(int data, Node next) {
      this.data = data;
      this.next = next;
  }
}


class linkedList {

  public static void main(String[] args) {
    Node head = new Node(1, new Node(2, new Node(3, null)));
    printList(head);
}

  public static void printList(Node head) {
    Node curr = head;
    while (curr != null) {
      System.out.print(curr.data + " ");
      curr = curr.next;
    }
  }
}