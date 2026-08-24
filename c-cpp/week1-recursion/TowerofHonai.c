#include <stdio.h>
int S = 0;
void TOH(int n,int A, int B, int C)
{
    if (n>0)
    {   
        TOH(n-1,A,C,B);
        printf("Move %d to %d \n",A,C);
        S += 1;
        TOH(n-1,B,A,C);
    } 
}

int main()
{
    TOH(22,1,2,3);
    printf("%d",S);
    
}