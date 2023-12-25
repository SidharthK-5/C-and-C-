/*
Receiving user input from a function not in main()
*/

# include <stdio.h>
void fun()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("a and b are : %d, %d", a, b);
}
int main()
{
    printf("Calling fun() inside main()\n");
    fun();
    return 0;
}