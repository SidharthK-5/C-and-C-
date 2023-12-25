/*
Basic calculator with CPP switch case
*/

#include <iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Enter operator: ";
    cin>>op;
    switch (op)
    {
        case '+':
            cout <<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-':
            cout <<a<<" - "<<b<<" = "<<a-b;
            break;
        case '*':
            cout <<a<<" * "<<b<<" = "<<a*b;
            break;
        case '/':
            cout <<a<<" / "<<b<<" = "<<a/b;
            break;
        case '%':
            cout <<a<<" % "<<b<<" = "<<a%b;
            break;
        default :
            cout <<"Invalid operator";
    }
}
