/*
Sum of sqaures of elements of an array using do..while loop
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, i, sum = 0;
	cout<<"Enter no of elements of the array: ";
	cin>>n;
	const int size = n;
	int a[size];
	cout<<"Enter the array elements: ";
	for(i=0; i<size; i++)
	{
		cin>>a[i];
	}
	
	i = 0;
	do
	{
		sum += pow(a[i],2);
		i++;
	}while(i<size);

	cout<<sum;
	return 0;
}
