/*
Program to print average of n numbers
*/

#include<stdio.h>
int main()
{
	int i, n, sum=0, A[10];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
	}
	printf("Sum = %f", (float)sum/n);
	return 0;
}