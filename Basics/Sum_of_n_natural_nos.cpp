/*
Get the sum of n natural numbers
*/

#include<iostream>
using namespace std;
int main()
{
	int i, n, sum = 0;
	cout<<"Enter the max number: ";
	cin >> n;
	for(i=1;i<=n;i++)
		sum += i;
	cout<<sum;
	return 0;
}
