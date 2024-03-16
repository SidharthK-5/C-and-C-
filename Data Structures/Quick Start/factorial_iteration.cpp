#include<stdio.h>

int main()
{
    int n, fact=1;
    scanf("%d", &n);
    while(n>0)
    {
        fact = fact*n;
        n-=1;
    }
    printf("Factorial is: %d", fact);
    return 0;
}