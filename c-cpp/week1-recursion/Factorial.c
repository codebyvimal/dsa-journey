#include <stdio.h>

int fact(int n)
{
    if (n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int Ifact(int n)
{
    int F = 1;
    for (int i=1; i<=n; i++)
        F = F*i;
    return F;
}

int main()
{
    int r = 5;
    printf("%d ",Ifact(r));
}