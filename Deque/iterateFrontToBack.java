import java.util.Deque;
import java.util.LinkedList;
import java.util.Iterator;
public class iterateFrontToBack { 
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
        Iterator it = d.iterator();
        while(it.hasNext())
            System.out.print(it.next() + " ");
        System.out.println();
        
        // Traversal using for-each 
        for(int x: d)
            System.out.print(x + " ");
        System.out.println();

    }
}