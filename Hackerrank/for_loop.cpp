/*
Question: Enter two int a and b. Using for loop [a,b], print:
            1. the number in english if 1 <= n <= 9
            2. Odd or even otherwise
*/

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    for(int n=a; n<=b; n++)
    {
        if (n == 1)
            cout<<"one";
        else if (n == 2)
            cout<<"two";
        else if (n == 3)
            cout<<"three";
        else if (n == 4)
            cout<<"four";
        else if (n == 5)
            cout<<"five";
        else if (n == 6)
            cout<<"six";
        else if (n == 7)
            cout<<"seven";
        else if (n == 8)
            cout<<"eight";
        else if (n == 9)
            cout<<"nine";
        else if (n>9 && n%2 == 0)
            cout<<"even";
        else if (n>9 && n%2 == 1)
            cout<<"odd";
        cout<<'\n';
    }
    return 0;
}