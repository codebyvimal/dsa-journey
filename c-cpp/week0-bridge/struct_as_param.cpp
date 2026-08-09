// Passing struct as a parameter through pass by value and Address or by reference.
#include <iostream>
#include <cstdio>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;

};
void fun(struct Rectangle r) // if using pass by address, should use *r
// Just use &r for pass by reference, remainig all same as pass b y value.
{
    r.length = 20;
    cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;
    // if using pass by address, r is pointer.
    // should use r->length to access length.
}
int main(){

    struct Rectangle r = {10,5};
    fun(r); // if using pass by address, should use &r
    printf("Length %d \nBreadth %d\n",r.length,r.breadth);

    return 0;
}
