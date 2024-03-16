#include<stdio.h>

int factorial(int n) //formal argument
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    int num;
    scanf("%d", &num); //Actual argument
    printf("%d", factorial(num));
    return 0; //This zero is returned to OS
}