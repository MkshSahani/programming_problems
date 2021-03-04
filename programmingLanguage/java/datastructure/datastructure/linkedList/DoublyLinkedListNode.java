package datastructure.linkedList;

public class DoublyLinkedListNode<T> {
    private DoublyLinkedListNode<T> next; 
    private DoublyLinkedListNode<T> previous; 
    private T data; 

    public DoublyLinkedListNode() {
        this.next = null; 
        this.previous = null; 
        this.data = null; 
    }

    public DoublyLinkedListNode(T element) {
        this(); 
        this.data = element;         
    }

    public void setData(T ele) {
        this.data = ele; 
    }

    public T getData() {
        return this.data; 
    }

    public void setNext(DoublyLinkedListNode<T> next) {
        this.next = next; 
    }

    public DoublyLinkedListNode<T> getNext() {
        return this.next; 
    }

    public void setPrevious(DoublyLinkedListNode<T> previous) {
        this.previous = previous; 
    }

    public DoublyLinkedListNode<T> getPrevious() {
        return this.previous; 
    }

}