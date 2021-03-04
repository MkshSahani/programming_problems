package datastructure.linkedList;

import java.util.Scanner; 

public class testModule {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in); 

        SinglyLinkedList<Integer> singlyLinkedList = new SinglyLinkedList<Integer>();
        for(int i = 0; i < 20; i++) {
            singlyLinkedList.add((int)(Math.random() * 200)); 
        }
        singlyLinkedList.printList();

        Integer element = sc.nextInt(); 
        singlyLinkedList.remove(element); 
        singlyLinkedList.printList(); // print linkedlist. 

        sc.close(); // close scanner 
        
    }    
}
