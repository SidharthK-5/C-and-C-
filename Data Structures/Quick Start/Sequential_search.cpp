/*
Program for Sequntial Search
*/

#include<iostream>
using namespace std;
int main()
{
  int i, item, n, A[10];
  int check = 0;
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>A[i];
  }
  cin>>item;
  for(i=0; i<n; i++)
  {
    if(A[i] == item)
    {
      cout<<item<<" is present at position "<<i+1;
      check = 1;
      break;
    }
  }
  if(check == 0)
  {
    cout<<item<<" is not present";
  }
  return 0;
}