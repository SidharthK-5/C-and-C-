/*
Use an input value as the size of an array
*/

#include<iostream>
using namespace std;
int main()
{
	int b;
	cin>>b;
	const int n = b;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
}
