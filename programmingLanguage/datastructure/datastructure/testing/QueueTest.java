package datastructure.testing;

import datastructure.Queue.Queue; 
import java.util.Scanner; 

public class QueueTest<T> {
    public static void main(String[] args) {
        Queue<Integer> queue = new Queue<Integer>();
        // queue testing. 
        for(int i = 0; i < 20; i++) {
            queue.enQueue((int)(Math.random() * 200)); 
        }
        int data = -1; 
        queue.printQueue(); 
        while(!queue.isEmpty()) {
            data = queue.deQueue(); 
            System.out.println(data); 
        }
        

    }
}
