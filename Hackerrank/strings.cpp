/*
Question: Input two strings seperated by a newline. Print the following in the subsequent lines:
            1. Lengths of both strings
            2. Concatenation of the two
            3. Swap the 1st character of both strings
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
    cin>>a;
    cin>>b;
    int lena = a.size(); // Returns the size of the string
    int lenb = b.size();
    string c = a + b; // Concatenation
    char b0 = b[0]; // Chara swap
    b[0] = a[0];
    a[0] = b0;
    cout<<lena<<' '<<lenb<<'\n'<<c<<'\n'<<a<<' '<<b;
    return 0;
}