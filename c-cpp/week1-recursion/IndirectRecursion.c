# include <stdio.h>
void funB(int n); // We should write this declaration of B, so we can use B before define.
void funA(int n)
{
    if (n>0)
    {
    printf("%d",n);
    funB(n-1);
    }
}

void funB(int n)
{
    if (n>1)
    {
    printf("%d",n);
    funA(n/2);
    }
}
int main()
{
    funA(20);
    return 0;
}
