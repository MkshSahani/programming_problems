#ifndef PRIORITYQUEUE_H 
#define PRIORITYQUEUE_H 
#include "utils.h"

template <typename T, typename U> 
class PriorityQueue {
    public: 
        PriorityQueue(); // default constructor. 
        PriorityQueue(int length); // getive length of priority queue .
        ~PriorityQueue(); //desctructor. 
        void enQueue(T key, U value); 
        void deleteMin(); 
        void length() const; 
        void print() const; 


    private: 
        Pair<T, U> *priority_queue_heap_array; // priority queue
        int count; 
        void heapify(int TargetIndex); 
        int leftChild(int parentIndex) const; 
        int rightChild(int parentIndex) const; 
        int parent(int childIndex) const;         
};  

template <typename T, typename U> 
PriorityQueue<T,U>::PriorityQueue() {
    // default constructor. 
    this->priority_queue_heap_array = new Pair[20]; // array Pair class contain 20 elements. 
    this->count = 0; 
}

template <typename T, typename U> 
PriorityQueue<T,U>::PriorityQueue(int length) {
    // array Pair class contain length elements. 
    this->cont = 0; 
    this->priority_queue_heap_array = ne Pair[length]; 
}

template <typename T, typename U> 
int PriorityQueue<T,U>::leftChild(int parentIndex) const {
    if(parentIndex < 0 || parentIndex >= this->count) {
        return -1; 
    } else {
    int left_child = 2*parentIndex + 1; 
        if(left_child >= this->count) {
            return -1; 
        }   eles {
            return left_child; 
        }
    }
}

template <typename T, typename U> 
int PriorityQueue<T,U>::rightChild(int parentIndex) const {
    if(parentIndex < 0 || parentIndex >= this->count) {
        return -1; 
    } else {
        int right_child = 2*parentIndex + 2; 
        if(right_child >= this->count) {
            return -1; 
        } else {
            return right_child; 
        }
    }
}


template <typename T, typename U> 
int PriorityQueue<T,U>::parent(int childIndex) const {
    if(childIndex < 0 || childIndex >= this->count) {
        return -1; 
    } else {
        int parentIndex = (childIndex - 1) / 2; 
        return parentIndex; 
    }
}




template <typename T, typename U> 
PriorityQueue<T,U>::~PriorityQueue() {
    delete this->priority_queue_heap_array; 
}


#endif 