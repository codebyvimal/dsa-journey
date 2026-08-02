#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
int length;
int breadth;
};
int main()
{
// Struct in Stack:
// Rectangle r = {10,5};
// cout<<r.length<<endl;
// cout<<r.breadth<<endl;

// Lets make a struct in heap.
Rectangle *p;
p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // in C 
p = new Rectangle;
(*p).length = 11;
(*p).breadth = 6;

// Rectangle *p = &r;  // Pointer for a struct in stack.
// Lets make pointer for a stack in heap.

cout<<p->length<<endl;
cout<<p->breadth<<endl;

return 0;
}