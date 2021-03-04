package datastructure.linkedList;

import java.util.LinkedList;

/***
 * @class : LinkedListNode.java 
 * SinglyLinkedListNode
*/



public class LinkedListNode<T> {
    private T data; 
    private LinkedListNode<T> next; 
    
    public LinkedListNode() {
        this.next = null; 
    }
    
    public LinkedListNode(T value) {
        this.data = value;
        this.next = null;  
    }
   
    public T getData() {
        return this.data; 
    }

    public LinkedListNode<T> getNext() {
        return this.next; 
    }

    public void setData(T value) {
        this.data = value; 
    }

    public void setNext(LinkedListNode<T> link) {
        this.next = link; 
    }

}

