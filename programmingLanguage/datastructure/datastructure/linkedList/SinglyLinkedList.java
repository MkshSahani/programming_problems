package datastructure.linkedList;

public class SinglyLinkedList<T> {
    public LinkedListNode<T> head; 

    public SinglyLinkedList() {
        this.head = null; 
    }


    public LinkedListNode<T> getHead() {
        return this.head; 
    }

    public void setHead(LinkedListNode<T> new_head) {
        this.head = new_head; 
    }

    public void add(T element) {
        if(this.head == null) {
            this.head = new LinkedListNode<T>(element); 
        } else {
            LinkedListNode<T> current = this.head; 
            while(current.getNext() != null) {
                current = current.getNext(); 
            }
            current.setNext(new LinkedListNode<T>(element)); 
        }
    }

    public void printList() {
        if(this.head == null) {
            System.out.println("List is Empty !!!"); 
        } else {
            LinkedListNode<T> current = this.head; 
            while(current != null) {
                System.out.print(current.getData() + ", "); 
                current = current.getNext(); 
            }
            System.out.println(""); 
        }
    }

    public void remove(T element) {
        if(this.head == null) {
            return ;  
        } else {
            LinkedListNode<T> current = this.head, previous = this.head; 
            while(current != null && !current.getData().equals(element)) {
                previous = current; 
                current = current.getNext(); 
            }
            if(current != null) {
                if(current.equals(this.head)) {
                    this.head = this.head.getNext(); 
                } else {
                    previous.setNext(current.getNext()); // delete current node. 
                }
            }
        }
    }

    public T search(T element) {
        if(this.head == null) {
            return null; 
        } else {
            LinkedListNode<T> current = this.head; 
            while(current != null) {
                if(current.getData().equals(element)) {
                    return current.getData(); // return data; 
                } 
                current = current.getNext(); 
            }
            return null; 
        }
    }
}
