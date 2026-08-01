#include <iostream>
#include <ostream>

using namespace std;

int main(){

    int a = 10;
    int &r = a;

    cout<<a<<endl<<r<<endl;

    cout<<&a<<endl<<&r<<endl; // You can see they are in same location.

    int b = 20;
    r = b;

    cout<<a<<endl<<r<<endl;

    cout<<&a<<endl<<&r<<endl<<&b; 

    
    

        return 0;
}