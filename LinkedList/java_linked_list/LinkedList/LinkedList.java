package java_linked_list.LinkedList; 

/**
 * @classname : LinkedList
 */

public class LinkedList {
    
    private LinkedListNode head; 

    public LinkedList() {
        this.head = null; 
    }

    public void add(int data) {
        if(this.head == null) {
            this.head = new LinkedListNode(data); 
        } else {
            LinkedListNode new_node = new LinkedListNode(data), current = this.head;
            while(current.getNext() != null) {
                current = current.getNext(); // iterate over next node. 
            }
            current.setNext(new_node); // add node in List. 
        }
    }

    public void remove(int data) {
        if(this.head != null) {
            LinkedListNode current = this.head, previous = this.head; 
            while(current != null && (current.getData() != data)) {
                previous = current; 
                current = current.getNext(); 
            }
            if(current != null) { // node found in Linked List. 
                if(current == this.head) { // if head is our targe node delete it and update the head value.
                    this.head = this.head.getNext(); // delete head. 
                } else {
                    previous.setNext(current.getNext()); // delete target node. 
                }
            }
        }
    }

    public boolean find(int data){
        if(this.head == null) { // if linkedlist is empty return null. 
            return false; 
        } else {
            LinkedListNode current = this.head; 
            while(current != null) { // iterate untill found the end of linked list. 
                if(current.getData() == data) { // if data found 
                    return true; // return true. 
                }  
                current = current.getNext();  // iterate over next node. 
            } 
            return false; // return false if not found.  
        }
    } 

    public void printList() {
        if(this.head != null) {
            LinkedListNode current = this.head; 
            while(current != null) {
                System.out.print(current.getData() + " "); 
                current = current.getNext(); // iterate over next node. 
            }
            System.out.println(); 
        }       
    }

    public LinkedListNode getHead() {
        return this.head; 
    }

    public void setHead(LinkedListNode new_head) { // funtion to updated head of linked list. 
        this.head = new_head; // update head. 
    }

} // @class : LinkedList. 
