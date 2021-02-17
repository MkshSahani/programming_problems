#ifndef HEAP_H 
#define HEAP_H 

#include <iostream> 
#include <cstdlib> 
#include <cassert> 


using namespace std; 

template <typename T> 
class MinHeap {
    public: 
        MinHeap(); // default constructor. 
        MinHeap(int length); // constructor with length parameter. 
        void insert(T element); // expecting an integer value in argument. 
        T deleteMin(); 
        int length() const; // return number of element in heap. 
        void heapify(int TargetIndex); // heapify the heap when it goes unbalanced.  
        void print() const; 
    private: 
        T *heap_array; 
        int count; 
        int leftChild(int parentIndex) const; 
        int rightChild(int parentIndex) const; 
        int parent(int childIndex) const; 
}; 

template <typename T> 
MinHeap<T>::MinHeap() {
    this->heap_array = new T[100];
    this->count = 0; 
}

template <typename T> 
MinHeap<T>::MinHeap(int length) {
    this->heap_array = new T[length]; 
    this->count = 0; 
}

template <typename T> 
int MinHeap<T>::leftChild(int parentIndex) const {
    if(parentIndex < 0 || parentIndex > this->count) {
        return -1; 
    } else {
        int lh = 2*parentIndex + 1; 
        if(lh >= this->count) {
            return -1; 
        } else {
            return lh; 
        }
    }
}

template <typename T> 
int MinHeap<T>::rightChild(int parentIndex) const {
    if(parentIndex < 0 || parentIndex > this->count) {
        return -1; 
    } else {
        int rh = 2*parentIndex + 2; 
        if(rh >= this->count) {
            return -1; 
        }
    }
}


template <typename T> 
int MinHeap<T>::parent(int childIndex) const {
    if(childIndex <= 0 || childIndex >= this->count) {
        return -1; 
    } 
    else {
        return (childIndex - 1) / 2; 
    }
}

template <typename T> 
void MinHeap<T>::insert(T element) {
    int temp_index = this->count; 
    this->count += 1; 
    while(temp_index > 0 && this->heap_array[(temp_index - 1) / 2] > element) {
        this->heap_array[temp_index] = this->heap_array[(temp_index - 1) / 2];  
        temp_index = (temp_index - 1) / 2; 
    }
    this->heap_array[temp_index] = element; 
     
}


template <typename T> 
void MinHeap<T>::heapify(int TargetIndex) {
    int leftChildIndex = this->leftChild(TargetIndex), rightChild = this->rightChild(TargetIndex), min = TargetIndex; 
    if(leftChild != -1 && this->heap_array[leftChild] < this->heap_array[min]) {
        min = leftChild; 
    }  
    if(rightChild != -1 && this->heap_array[rightChild] < this->heap_array[min]) {
        min = rightChild; 
    }

    if(min != TargetIndex) {
        int temp = this->heap_array[TargetIndex]; 
        this->heap_array[TargetIndex] = this->heap_array[min]; 
        this->heap_array[min] = temp; // swap element. 
    } 
}

template <typename T> 
T MinHeap<T>::deleteMin() {
    assert(this->count!=0);  // heap should have atleast one element. 
    int temp = this->heap_array[this->count]; 
    this->heap_array[this->count] = this->heap_array[0]; 
    this->heap_array[0] = temp; 
    this->count--; 
    this->heapify(0); // heapify the heap using Zero Index as target. 
}

template <typename T> 
void MinHeap<T>::print() const {
    for(int i = 0; i < this->count; i++) {
        cout << this->heap_array[i] <<  ", "; 
    }
    cout << endl; 
}


#endif 