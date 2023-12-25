/*
Program to input numbers using pointer var
*/

#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n,sum;
	int *ptr = arr; // Storing array pointer to the user defined pointer
	cout<<"Enter the no of elements : ";
	cin>>n;

	// Read array elements using pointer
	for(i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<"th array element : ";
		cin>>*(ptr+i);
	}

	// Get sum of array elements
	sum = 0;
	for(i=0; i<n; i++)
	{
		sum = sum + *(ptr+i);
	}
	cout<<"sum = "<<sum;
	return 0;
}
