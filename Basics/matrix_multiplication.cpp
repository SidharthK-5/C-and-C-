/*
Multiply two matrices of any order
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	int a[10][10],b[10][10],c[10][10];
	cout<<"Enter the no of rows and columns of the matrices: ";
	cin>>n;
	cout<<"Enter the elements of the 1st matrix:\n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of the 2nd matrix:\n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			c[i][j]=0;
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<n; k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	cout<<"The resulting matrix is : \n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
