package datastructure.Stack;

import datastructure.linkedList.SinglyLinkedList;
import datastructure.linkedList.LinkedListNode;
public class Stack<T> {
    private SinglyLinkedList<T> stack; 
    
    public Stack() {
        this.stack = new SinglyLinkedList<T>(); 
    }

    public void push(T element) {
        if(this.stack.getHead() == null) {
            this.stack.setHead(new LinkedListNode<T>(element)); 
        } else {
            LinkedListNode<T> head_node = this.stack.getHead(), new_node = new LinkedListNode<T>(element);
            new_node.setNext(head_node); 
            this.stack.setHead(new_node); 
        }
    }

    public boolean isEmpty() {
        return this.stack.getHead() == null; 
    }

    public T pop() {
        if(this.stack.getHead() == null) {
            return null; // return if node is not found. 
        } else {
            LinkedListNode<T> pop_node = this.stack.getHead(); 
            this.stack.setHead(this.stack.getHead().getNext()); 
            return pop_node.getData(); // return data.  
        }
    }

}
