#ifndef UTIL_H 
#define UTIL_H 

template <typename T, typename U> 
class Pair {
    public: 
        Pair(); 
        Pair(T key, U value); 
        void setKey(T key); 
        void setValue(T key); 
        T getKey() const; 
        T getValue() const; 
    private: 
        T key; 
        U value; 
}


#endif 