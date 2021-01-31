#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 


int isSorted(int *arr, int length) {
    if(length == 1) {
        return 1; 
    }  else {
        return *(arr + length - 1) >= *(arr + length - 2) ? isSorted(arr, length -  1) : 0; 
    }
}


void insertionSort(int *arr, int length)
{
    int j = 0, key = 0; 
    for(int p = 1; p < length; p++) {
        j = p - 1; 
        key  = *(arr + p); 
        while(*(arr + j)  > key && j >= 0) {
            *(arr + j + 1) = *(arr + j); 
            j -= 1; 
        } 
        *(arr + j + 1) = key;  
    }

    return; 
}

void printArr(int *arr, int length) {
    printf("\n"); 
    for(int i = 0; i < length; i++) {
        cout << *(arr + i) << ", "; 
    }
    printf("\n"); 
}

int main(int argc, char* argv[]) {

    int seed_random =  static_cast<int>(time(0)); 
    srand(seed_random); 

    int arr[20]; 
    for(int i = 0; i < 20; i++) {
        *(arr + i) = rand() % 100; 
    }
    printArr(arr, 20); 
    cout << "-----" << endl; 

    if(isSorted(arr, 20)) {
        cout << endl << "---- Sorted--- "  << endl; 
    } else {
        cout << endl << "---- not sorted --- " << endl; 
    }

    insertionSort(arr, 20); 
    cout << "----" << endl;
    printArr(arr,20);
        if(isSorted(arr, 20)) {
        cout << endl << "---- Sorted--- "  << endl; 
    } else {
        cout << endl << "---- not sorted --- " << endl; 
    }


    return 0; 
}