// Practicing all 3 parameter passing methods
#include <iostream>
using namespace std;

// Let me code something that uses all 3 parameter passing methods

int square(int a, int *b, int &c)
{
    a = a*a; // Passed by value
    *b = (*b) * (*b); // Passed by Address
    c = c*c; // Passed By Reference
    return 0;
};

int main(){
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;

    cout<<num1<<" "<<num2<<" "<<num3<<endl;
    square(num1,&num2,num3);
    cout<<num1<<" "<<num2<<" "<<num3<<endl;
    
}

