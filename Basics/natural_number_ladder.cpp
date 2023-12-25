/*
Prints a ladder of natural numbers based on the input no. of 'lines'
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,number=1, lines;
	cout<<"Enter no. of lines to be printed: ";
	cin>>lines;
	for(i=1; i<=lines; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<number<<" ";
			number++;
		}
		cout<<"\n";
	}
	return 0;
}
