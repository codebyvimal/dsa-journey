#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:

    Rectangle(){  // Default constructor
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    { // Parameterized constructor
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
    
    void setLength(int l)
    {
        length = l;
    }
    
    void setBreadth(int b)
    {
        breadth = b;
    }
    
    int getLength()
    {
        return length;
    }
    
    int getBreadth()
    {
        return breadth;
    }
    ~Rectangle(){
    cout<<"This will distruct if memory allocated"<<endl;
}
    
};
int main(){
    Rectangle r(10,5);

    cout<<"Area "<<r.area()<<endl;
    cout<<"Perimeter "<<r.perimeter()<<endl;

    return 0;
}