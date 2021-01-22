public class LinkedListNode {
    private int data; 
    private LinkedListNode next; 

    public LinkedListNode() {
        this.data = 0; 
        this.next = null; 
    }

    public LinkedListNode(int data) {
        this.data = data; 
        this.next = null; 
    }

    public int getData() {
        return this.data; 
    }

    public void setData(int data) {
        this.data = data; 
    }

    public LinkedListNode getNext() {
        return this.next; 
    }

    public void setNext(LinkedListNode next_node) {
        this.next = next_node; 
    }

    public void writeDetails() {
        System.out.println("data : " + this.data + 
        " Address : " + this + 
        " Next node addresss : " + this.next); // print details of LinkedListNode 
    }
}

