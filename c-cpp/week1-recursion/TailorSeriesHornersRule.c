#include <stdio.h>
double e(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x*s/n;   // x is int, s is double mult give double. div by int give double.
    return e(x,n-1); // i case x/n*s, int div by int, not so accurate.
} 

int main()
{
    printf("%lf", e(1,10));
    return 0;
}