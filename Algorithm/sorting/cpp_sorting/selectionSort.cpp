#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#include "util.h"

using namespace std; 

int min(int *arr, int from, int to) {
    int min_index = from; 
    for(int i = from + 1; i < to; i++) {
        if(*(arr + i)  < *(arr + min_index)) {
            min_index = i; 
        }
    }
    return min_index; 
}

void selectionSort(int *arr, int len) {
    int minIndex = -1, temp = 0; 
    for(int i = 0; i < len; i++) {
        minIndex = min(arr, i, len); 
        if(minIndex != i) {
            temp = *(arr + minIndex); 
            *(arr + minIndex) = *(arr  + i); 
            *(arr + i) = temp; 
        }
    }
}

int main(int argc, char* argv[]) {

    int *data = (int *)malloc(sizeof(int) * 20); 
    for(int i = 0; i < 20; i++) {
        *(data + i) = rand() % 100; 
    }

    printArr(data, 20); 
    printf("-- ------- "); 
    cout << endl; 
    selectionSort(data, 20); 
    printf("------  --- -");
    printArr(data, 20); 


    return 0; 
}
