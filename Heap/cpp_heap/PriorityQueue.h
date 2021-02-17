#ifndef PRIORITYQUEUE_H 
#define PRIORITYQUEUE_H 
#include "utils.h"

template <typename T, typename U> 
class PriorityQueue {
    public: 
        PriorityQueue(); 
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
        
};  

template <typename T, typename U> 
PriorityQueue<T,U>::PriorityQueue() {
    // default constructor. 
}

template <typename T, typename U> 
void PriorityQueue<T,U>::enQueue(T key, U value) {

}


#endif 