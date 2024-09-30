import java.util.*; 
  
public class withExceptions { 
    public static void main(String[] args) 
    {
        Deque<Integer> d = new LinkedList<Integer>();
        
        // Adds element to front of queue
        d.addFirst(10);
        
        // Adds element to end of queue
        d.addLast(20);
        
        // Adds element to front of queue
        d.addFirst(5);
        
        // Adds element to end of queue
        d.addLast(15);
        
        // Retrieve the head element
        System.out.println(d.getFirst());
        
        // Retrieve the tail element
        System.out.println(d.getLast());
        
        // Retrieve and remove the head element
        d.removeFirst();
        
        // Retrieve and remove the tail element
        d.removeLast();
        
        System.out.println(d.getFirst());
        System.out.println(d.getLast());
    }
}

//these functions throw exceptions