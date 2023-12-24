/*
QUESTION: Create an array with size n, read from input
            read elements to the array and print it in reverse order
*/

#include<iostream>
using namespace std;
int main()
{
    int n, *arr;
    cin>>n;
    arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int j=n-1; j>=0; j--)
    {
        cout<<arr[j]<<' ';
    }
    return 0;
}