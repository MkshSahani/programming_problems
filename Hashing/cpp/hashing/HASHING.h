#ifndef HASHING_H 
#define HASHING_H 

#include <iostream> 
#include <cstdlib> 

using namespace std; 


template <typename T> 
class DirectAddresssingHashMap {

    public: 
        DirectAddresssingHashMap(); 
        void add(T element); 
        T get(int key); // give key and fetch the element. 
        ~DirectAddresssingHashMap(); // destructor. 
    private: 
        T *data_array; 
}; 

template <typename T> 




#endif 