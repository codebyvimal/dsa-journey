#include <stdio.h>

int F[10];

// Loop
int fib(int n)
{
    int t0=0,t1=1,s=0,i;

    if (n<=1) return n;

    for (i=2;i<=n;i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

//Recursion
int rfib(int n)
{
    if (n<=1) return n;
    return fib(n-2)+fib(n-1);
}

//Memoization
int mfib(int n)
{
    if (n<=1)
    {
        F[n]=n;
        return n;
    }
    else {
        if (F[n-2]==-1)
            F[n-2]=mfib(n-2);
        if (F[n-1] == -1)
            F[n-1]=mfib(n-1);
        F[n] = F[n-2]+F[n-1];
        return F[n];
    }
    
}

int main()
{
    //initialize array for Memoization
    int i;
    for (i=0;i<10;i++)
        F[i]=-1;

    printf("%d ",fib(8));
    printf("%d ",rfib(8));
    printf("%d ",mfib(8));
    return 0;
}