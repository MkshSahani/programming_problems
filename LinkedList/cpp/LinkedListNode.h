#ifndef LINKEDLISTNODE_H 
#define LINKEDLISTNODE_H 
#include <iostream> 
#include <cstdlib> 

using namespace std; 


/**
 * @class : SinlyLinkedListNode 
 * 
*/

template <typename T> 
class SinglyLinkedListNode {
    public: 

        SinglyLinkedListNode(); 
        SinglyLinkedListNode(T data); 
        T getData() const; 
        void setData(T data); 
        SinglyLinkedListNode<T>* getNext() const; 
        void setNext(SinglyLinkedListNode<T> *next_node); 

    private: 
        T data; 
        SinglyLinkedListNode *next; 
     
}; 


template <typename T> 
SinglyLinkedListNode<T>::SinglyLinkedListNode() {
    this->next = NULL; 
}

template <typename T>
SinglyLinkedListNode<T>::SinglyLinkedListNode(T data) {
    this->data = data; 
    this->next = NULL; 
} 

template <typename T> 
void SinglyLinkedListNode<T>::setData(T data) {
    this->data = data; 
}

template <typename T> 
T SinglyLinkedListNode<T>::getData() const 
{
    return this->data; 
}

template <typename T> 
void SinglyLinkedListNode<T>::setNext(SinglyLinkedListNode<T> *next_node) {
    this->next = next_node; 
}

template <typename T> 
SinglyLinkedListNode<T>* SinglyLinkedListNode<T>::getNext() const {
    return this->next; 
}



/**
 * @class : DoublyLinkedListNode. 
*/

// template <typename T> 
// class DoublyLinkedListNode : public SinlgyLinkedListNode<T> {
//     public: 
//         DoublyLinkedListNode(); 
//         DoublyLinkedListNode(T data); 

//     private: 
//         DoublyLinkedListNode* previous; 

// }; 


#endif 