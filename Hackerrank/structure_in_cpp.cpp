/*
Question: Create a structure to store student details such as:
            age(int), first_name(string), last_name(string) and standard(int)
*/

#include <iostream>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};


int main() {
    Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    return 0;
}