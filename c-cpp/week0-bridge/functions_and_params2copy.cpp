// Creating array in a function and returning back to main.
#include <iostream>

using namespace std;


int * fun(int size) // takes size and return a pointer.
{
    int *p;
   p = new int[size]; // creating array of given size using malloc/new int.
   
   for (int i=0;i<size;i++)
       p[i]=i+1; // Initializing elements of array, I will get like 1,2,3 for size of array.

   return p; //returning a pointer.
}

int main()
{
    int *ptr,sz=5;
    ptr = fun(sz);
    for (int i=0; i<sz;i++)
        cout<<ptr[i]<<endl;

    delete[] ptr; // without these two lines, it is not working in maching
    ptr = nullptr; // These two prevent memory leak, as we gott memory from heap.
    return 0;
}

