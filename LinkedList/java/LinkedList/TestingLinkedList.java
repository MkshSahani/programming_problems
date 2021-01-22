package java.LinkedList;

public class TestingLinkedList {

    public static void main(String[] args) {
        LinkedList list = new LinkedList(); 
        for(int i = 0; i < 200; i++) {
            list.add((int)Math.random() * 1000); 
        }
        list.printList(); 
    }
    
}
