package datastructure.Queue;

import datastructure.linkedList.LinkedListNode;
import datastructure.linkedList.SinglyLinkedList; 


public class Queue<T> {
    private LinkedListNode<T> front; 
    private LinkedListNode<T> rear; 
    private SinglyLinkedList<T> queue; 

    public Queue() {
        this.front = null; 
        this.rear = null; 
        queue = new SinglyLinkedList<T>(); 
    }

    public boolean isEmpty() {
        return this.rear == null; 
    }

    public void enQueue(T element) {
            
            LinkedListNode<T> new_node = new LinkedListNode<T>(element); 
            if(queue.getHead() == null) {
                this.queue.setHead(new_node); 
                this.rear = new_node;  
                this.front = this.rear;  
            } else {
                this.rear.setNext(new_node); 
                this.rear = this.rear.getNext(); 
            }
    }

    public T deQueue() {
        if(this.front == null) {
            return null; 
        } else {
            T element = this.front.getData(); 
            if(this.queue.getHead().getNext() == null) {
                this.queue.setHead(null);  
                this.rear = null; 
                this.front = null; 
            } else {
                this.queue.setHead(this.queue.getHead().getNext()); 
                this.front = this.queue.getHead();
            }
            return element;
        }
    }

    public void printQueue() {
        LinkedListNode<T> temp = this.front; 
        while(temp != null) {
            System.out.print(temp.getData()  +  ", "); 
            temp = temp.getNext(); 
        }
        System.out.println(); // add a new line. 
    }
}
