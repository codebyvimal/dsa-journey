// simple structure & Function program using class to find perimeter and area of rectangle

#include <iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *p,int l,int b){
    p -> length = l;
    p -> breadth = b;
    
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}

int main()
{
    Rectangle r = {0,0}; // in C you need "struct", in C++ just "Rectangle" enough.
    int l,b;
    printf("Enter Length and Breadth");
    cin>>l>>b;

    initialize(&r,l,b);
    
    int a = area(r);
    int p = perimeter(r);

    printf("Area=%d\nPerimeter=%d",a,p);
    
    return 0;
}