// Creating array in main function and passing it as a parameter to another function.
#include <iostream>

using namespace std;

// Array as a Parameter
void fun(int A[ ],n) // parameter A[] is a pointer.
// You can also use *A, no need to change any other, it just works.
{
    cout<<sizeof(A)/sizeof(int)<<endl; // This will be 8/4=2. A is pointer.
    // for(int a:A){
    //     cout<<a<<" "; // This will not work.
    // }                 // We Can't use "for each" loop upon a pointer
    // We use for loop
    for (int i=0;i<5; i++){ // To make this "for" loop, we need n.
        cout<<A[i]<<endl;
    }
}

 

int main()
{
    int A[] = {2,4,6,8,10};
    int n = 5;

    fun(A,n);
    cout<<sizeof(A)/sizeof(int)<<endl;
    for (int x:A)
    cout<<x<<" ";
}

