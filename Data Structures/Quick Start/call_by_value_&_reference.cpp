#include<stdio.h>

int call_by_value(int n)
{
    n = n*n;
    return n;
}

int call_by_reference(int *np)
{
    *np = (*np) * (*np);
    return *np;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("call by value n=%d, return=%d", n, call_by_value(n));
    printf("\ncall by reference n=%d, return=%d", n, call_by_reference(&n));
    return 0;
}