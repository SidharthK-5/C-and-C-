/*
Get all prime numbers within the specified limit
*/

#include<iostream>
using namespace std;

int main()
{
    int i, limit, j, flag, count=0;
    cout<<"Enter the upper limit: ";
    cin>>limit;
    for(i=2; i<=limit; i++)
    {
		flag = 0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
				flag = 1;
                break;
			}
        }
        if(flag == 0)
        {
			cout<<i<<"  ";
			count++;
		}
    }
    cout<<"\nCount of prime numbers within "<<limit<<" = " <<count;
    return 0;
}
