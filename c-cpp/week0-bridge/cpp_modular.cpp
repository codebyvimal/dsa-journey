// simple Modular/Procedural program using class to find perimeter and area of rectangle
// We just separate the functions we do as actual functions.
#include <iostream>
#include<stdio.h>

using namespace std;

int area(int length,int breadth){
    return length*breadth;
}

int perimeter(int length, int breadth){
    return 2*(length+breadth);
}

int main()
{
    int length=0,breadth=0; // Why can't we combine these two as a structure 
    // as they define single rectangle? We see in next style ... 

    printf("Enter Length and Breadth");
    cin>>length>>breadth;

    // int area = area(length,breadth); // Function name and variaable name should not be same
    int a = area(length,breadth);
    int p = perimeter(length,breadth);

    printf("Area=%d\nPerimeter=%d",a,p);
    
    return 0;
}