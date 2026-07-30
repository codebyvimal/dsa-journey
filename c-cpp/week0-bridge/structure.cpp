#include <stdio.h>
#include <iostream>


struct Rectangle
{
    int length; // 4 bytes
    int breadth; // 4 bytes
    char x; // 1 byte
    // Total should take 9, but it will take 12.
    // It will allocate 4 bytes for char, but will only use one.
    // If you change other two to double, char will also allocated 8 bytes.
};
    struct Bad 
    {  
    char a;   // 1 byte  // 3 bytes padding  
    int b;    // 4 bytes  
    char c;   // 1 byte   
        // 3 bytes padding
    } B;

    struct Good 
    {  
    int b;    // 4 bytes  
    char a;   // 1 byte  
    char c;   // 1 byte  
    // 2 bytes padding
    } G;

int main()
{
    struct Rectangle r = {10,5};

    // printf("Size of struct is %d\n", sizeof(r)); //This will give error of
    // type "long unsigned int", so use %ld and not %d
    printf("Size of struct is %ld\n", sizeof(r));
    printf("Size Bad of struct is %ld\n", sizeof(B));
    printf("Size Good of struct is %ld\n", sizeof(G));

    
    return 0;
}