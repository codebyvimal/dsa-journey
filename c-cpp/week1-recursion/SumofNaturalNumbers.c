#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n-1)+n;
}

int Isum(int n)
{   
    int S = 0; 
    for (int i=1;i<=n;i++)
        S = S + i;
    return S;
}
int main()
{
    int a = 5;
    printf("%d ",sum(a));
    printf("%d ",Isum(a));
}
// We can easily do this with n(n+1)/2, but it's a good example for recursion