#ifndef HEAP_H 
#define HEAP_H 

template <typename T> 
class MinHeap {
    public: 
        MinHeap(); // default constructor. 
        MinHeap(int length); // constructor with length parameter. 
        void insert(T element); // expecting an integer value in argument. 
        T deleteMin(); 
        int count() const; // return number of element in heap. 

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
    if(parentIndex < 0 || parentIndex > tihs->count) {
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
    this->heap_array[temp_index] = element; 
    this->count++;  
    while(temp_index > 0 && this->heap_array[(temp_index - 1) / 2] > element) {
        T temp_element = this->heap_array[(temp_index - 1) / 2]; 
        this->heap_array[(temp_index - 1) / 2] = this->heap_array[temp_index]; 
        this->heap_array[temp_index] = temp_element; 
        temp_index = (temp_index - 1) / 2; 
    }

    this->count += 1; 
}





#endif 