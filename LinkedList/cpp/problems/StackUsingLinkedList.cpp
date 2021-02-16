#include "../LinkedList.h"
#include <stdexcept> 
#include <cassert> 

template <typename T> 
class Stack {
    public: 
        Stack(); 
        T pop(); 
        void push(T element);
        void show() const;  
    private: 
        SinglyLinkedList<T> *stack_linked_list; 
}; 

template <typename T> 
Stack<T>::Stack() {
    this->stack_linked_list = new SinglyLinkedList<T>(); // allocate linked list in heap. 
}

template <typename T> 
void Stack<T>::push(T element) {
    if(this->stack_linked_list->getHead() == NULL) {
        this->stack_linked_list->setHead(new SinglyLinkedListNode<T>(element)); 
    } else {
        SinglyLinkedListNode<T> *new_node = new SinglyLinkedListNode<T>(element); 
        new_node->setNext(this->stack_linked_list->getHead()); 
        this->stack_linked_list->setHead(new_node); 
    }
}

template <typename T> 
T Stack<T>::pop() { // pop the top of stack. 
        assert(this->stack_linked_list->getHead() != NULL); 
        SinglyLinkedListNode<T> *target_node = this->stack_linked_list->getHead(); 
        T element = target_node->getData(); 
        this->stack_linked_list->setHead(this->stack_linked_list->getHead()->getNext()); 
        delete target_node; 
        return element; 
    
}

template <typename T> 
void Stack<T>::show() const {
    this->stack_linked_list->printList(); 
}

int main(int argc, char* argv[]) {

    Stack<int> *stack = new Stack<int>();
    int data = 0, choice = 0; 
    cin >> choice; 
    while(choice != -1) {
        switch(choice) {
            case 1 : 
                cin >> data; 
                stack->push(data);
                break; 
            case 2: 
                data = stack->pop(); 
                cout << data; 
                break; 
            case 3: 
                stack->show(); 
                break; 
        }
        cin >> choice; 
    }


    return 0; 
}