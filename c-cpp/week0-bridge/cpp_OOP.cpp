// simple program using class to find perimeter and area of rectangle

#include <iostream>
#include<stdio.h>

using namespace std;

class Rectangle{
    int length;
    int breadth;
public:
void initialize(int l,int b)
{
    length = l;
    breadth = b;
}

int area()
{
    return length*breadth;
}

int perimeter()
{
    return 2*(length+breadth);
}
};

int main()
{
    Rectangle r; 
    int l,b;
    printf("Enter Length and Breadth");
    cin>>l>>b;

    r.initialize(l,b);
    
    int a = r.area();
    int p = r.perimeter();

    printf("Area=%d\nPerimeter=%d",a,p);
    
    return 0;
}