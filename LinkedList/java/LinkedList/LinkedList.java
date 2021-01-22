package java.LinkedList;

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

    public void printList() {
        if(this.head != null) {
            LinkedListNode current = this.head; 
            while(current != null) {
                System.out.print(current.getData() + " "); 
                current = current.getNext(); // iterate over next node. 
            }
        }       
    }
}



