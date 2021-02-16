#ifndef UTIL_H 
#define UTIL_H 

#include <iostream> 
#include <cstdlib> 

using namespace std; 


void printArr(int *arr, int len) {
    for(int i = 0; i < len; i++) {
        cout << *(arr + i) << ", "; 
    }
    cout << endl; 
}  


void swap(int *x, int *y) {
    *x = *x + *y; 
    *y = *x - *y; 
    *x = *x - *y; 
}


int isSorted(int *arr, int len) {
    if(len == 1) {
        return 1; 
    } 
    else {
        return *(arr + len - 1) >= *(arr + len - 2 ) ? isSorted(arr, len - 1) : 0; 
    }
}

#endif 