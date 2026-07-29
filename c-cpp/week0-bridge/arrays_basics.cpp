#include <iostream>
#include <ostream>

using namespace std; // allows you to use identifiers from the Standard Library (std) 
// without explicitly typing the std:: prefix

int main(){

    int A[10]  = {0};
    // Normal For loop:
    //for (int i = 0; i<10; i++){
    //   cout << A[i] << endl;
    //}

    // Easy way to loop in Cpp:
    // ranged-based for loop (or range-for loop) in C++

    //for (int x:A){
    //    cout << x << endl;
    //}

    // We can also get make some array of variable size
    int n;
    cout<< "Enter the Size"<< endl;
    cin>>n;
    
    // int B[n] = {1,2,3}; // We can't initialize variable sized array , 
    // you can uncomment it and see.
    int B[n]; // this will work.

    for (int x:B){
        cout << x << endl;
    }
    

    return 0;
}

    