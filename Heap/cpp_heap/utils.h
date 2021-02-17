#ifndef UTIL_H 
#define UTIL_H 

#include <iostream> 
#include <cstdlib> 

using namespace std; 

template <typename T, typename U> 
class Pair {
    public: 
        Pair(); 
        Pair(T key, U value); 
        void setKey(T key); 
        void setValue(U value); 
        T getKey() const; 
        T getValue() const; 
    private: 
        T key; 
        U value; 
}; 

template <typename T, typename U> 
Pair<T,U>::Pair() {
    // default construtor. 
}

template <typename T, typename U> 
Pair<T,U>::Pair(T key, U value) {
    this->key = key; 
    this->value = value; 
}

template <typename T, typename U> 
void Pair<T,U>::setKey(T key) {
    this->key = key; 
}

template <typename T, typename U> 
void Pair<T,U>::setValue(U value) {
    this->value = value; 
}

template <typename T, typename U> 
T Pair<T, U>::getKey() const {
    return this->key; 
}

template <typename T, typename U> 
T Pair<T, U>::getValue()  const {
    return this->value; 
}

#endif 