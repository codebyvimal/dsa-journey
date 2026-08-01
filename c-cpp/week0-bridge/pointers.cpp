#include <iostream>
#include <ostream>

using namespace std;
int main()
{
    int a = 10;
    int *p;

    p = &a; // Notice, here we don't use star.
    
    cout<<*p<<endl;

    // Let's do for Array

    int A[5] = {1,2,3,4,5};

    p = A; // Notice no '&' for A, because for array,
    // A will give the location of first element of array/ starting address of array.
    // We can also use p = &A[0];
    // p = &A; will not work.

    for (int i=0; i<5; i++) 
        cout<<p[i]<<endl; //Accessing using pointer

    // Also we can create array inside heap.
    p = (int *)malloc(5*sizeof(int)); // this array is in memory
    // p = new int[5]; // in cpp. simple.
    p[0] = 10; p[1] = 15;

    for (int i=0; i<5; i++) 
        cout<<p[i]<<endl; // I noticed something, the memory in heap has no garbage values.

    // As we get the memory from heap, we should delete it after use.
    // Called De-allocating Memory
    delete [] p; //in CPP
    // free(p); // in C

    return 0;
    
}