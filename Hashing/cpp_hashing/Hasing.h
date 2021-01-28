#ifndef HASHING_H 
#define HASHING_H 

#define MAX_HASH_LENGTH 100 

#include <iostream> 
#include <cstdlib> 


/**
 * 
 * @namespace : HASING_DATASTRUCTURE. 
 * 
*/

namespace HASING_DATASTRUCTURE {

    

    template <typename T> 
    class DirectAddressHashing {
        public:
            DirectAddressHashing(int max_length);
            DirectAddressHashing(); // default constructor.  
            ~DirectAddressHashing(); 

            void add(int key, T data); 
            void remove(int key); 
            T getData(int key) const; 
            int length() const; 

        private: 
            T *data_array; 
            int count; 
    };  

    /**
     * 
     * @name : Default constructor, DirectAddressHashing. 
     * ? in default constuctor, length of data_array is limited to MAX_LENGTH 
     * 
    */

    template <typename T> 
    DirectAddressHashing<T>::DirectAddressHashing() {
        this->data_array = new T[MAX_LENGTH]; // initialize array of data. 
    }


    template <typename T> 
    DirectAddressHashing<T>::DirectAddressHashing(int max_length) {
        this->data_array = new T[max_length]; 
    }

    template <typename T> 
    DirectAddressHashing<T>::~DirectAddressHashing() {
        delete data_array; 
    }

    template <typename T> 
    void DirectAddressHashing<T>::add(int key, T data) {
        this->data_array[key] = data; // data data in array. 
    } 



};

#endif 