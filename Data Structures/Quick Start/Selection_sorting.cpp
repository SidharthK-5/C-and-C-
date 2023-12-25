/*
Program for Selection Sorting
*/

#include<iostream>
using namespace std;
int main()
{
    int i, j, n, temp, pos, A[10];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(i=0; i<n-1; i++)
    {
        pos = i;
        for(j=i+1; j<n; j++)
        {
            if(A[j] < A[pos])
            {
                pos = j;
            }
        }
        temp = A[pos];
        A[pos] = A[i];
        A[i] = temp; 
    }
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}