#include "LinkedList.h" 

int main(int argc, char* argv[]) {
    
    int key_value = 0; 

    SinglyLinkedList<int> *list = new SinglyLinkedList<int>(); 
    for(int i = 0; i < 20; i++) 
        list->insertKey(rand() % 1000); 


    list->printList(); // print Linked List. 
    cout << "Data : "; 
    cin >> key_value; 
    list->deleteKey(key_value); 
    list->printList(); 

    return 0; 
}