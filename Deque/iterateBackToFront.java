import java.util.Deque;
import java.util.LinkedList;
import java.util.Iterator;

public class iterateBackToFront { 
    @SuppressWarnings("rawtypes")
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
        
        // Traversal using Iterator
        Iterator it = d.descendingIterator();
        while(it.hasNext())
            System.out.print(it.next() + " ");
      
    }
}
