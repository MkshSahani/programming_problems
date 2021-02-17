#include "Heap.h"
#include <ctime> 

int main(int argc, char const *argv[])
{
    int seed_random = static_cast<int>(time(0)); 
    srand(seed_random); // seeed random. 

    MinHeap<int> *min_heap = new MinHeap<int>(); 
    for(int i = 0; i < 10; i++) {
        min_heap->insert(rand() % 200); 
    }
    min_heap->print(); // print min heap. 
    
    
    return 0;
}
