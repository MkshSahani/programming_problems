#ifndef LINKEDLIST_H 
#define LINKEDLIST_H 
#include "LinkedListNode.h"

/**
 * @class : SinglyLinkedList 
*/

template <typename T> 
class SinglyLinkedList {
    public: 
        SinglyLinkedList(); 
        void insertKey(T data); 
        SinglyLinkedListNode<T> *getHead() const; 
        void setHead(SinglyLinkedListNode<T> *new_head); // set head to LinkedList. 
        void deleteKey(T data); 
        void printList() const; 

    private: 
        SinglyLinkedListNode<T> *head; 
}; 

template <typename T> 
SinglyLinkedList<T>::SinglyLinkedList() {
    this->head = NULL; 
}

template <typename T> 
void SinglyLinkedList<T>::insertKey(T data) {
    if(this->head == NULL) {
        this->head = new SinglyLinkedListNode<T>(data); 
    } else {
        SinglyLinkedListNode<T> *current_node = this->head; 
        while(current_node->getNext() != NULL) {
            current_node = current_node->getNext();
        }
        current_node->setNext(new SinglyLinkedListNode<T>(data)); // insert key in node. 
    }
}

template <typename T> 
SinglyLinkedListNode<T>* SinglyLinkedList<T>::getHead() const 
{
    return this->head; 
}

template <typename T> 
void SinglyLinkedList<T>::setHead(SinglyLinkedListNode<T> *new_head) {
    this->head = new_head; 
}

template <typename T> 
void SinglyLinkedList<T>::deleteKey(T data) {
    if(this->head != NULL) {
        SinglyLinkedListNode<T> *current = this->head, *previous = this->head;
        while(current != NULL && current->getData() != data) {
            previous = current; 
            current = current->getNext(); 
        }

        if(current != NULL) {
            if(current == this->head) {
                this->head = this->head->getNext(); 
            } else {
                previous->setNext(current->getNext()); 
            }
            delete current; // delete current node. 
        }
    }
}

template <typename T> 
void SinglyLinkedList<T>::printList() const {
    if(this->head == NULL) {
        cout << "Linked List is Empty"  << endl; 
    } else {
        SinglyLinkedListNode<T> *current_node = this->head; 
        while(current_node) {
            cout << current_node->getData() << ", "; 
            current_node = current_node->getNext(); // iterate to next node. 
        }
        cout << endl; 
    }
}




#endif 