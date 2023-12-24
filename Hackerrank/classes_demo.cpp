/*
QUESTION: Create a class to store student details.
            Add member variables and member functions
*/

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
        int age;
        string first_name;
        string second_name;
        int std;
    public:
        void set_age(int a)
        {
            age = a;
        }
        void set_standard(int s)
        {
            std = s;
        }
        void set_first_name(string n)
        {
            first_name = n;
        }
        void set_last_name(string n)
        {
            second_name = n;
        }
        int get_age()
        {
            return age;
        }
        string get_first_name()
        {
            return first_name;
        }
        string get_last_name()
        {
            return second_name;
        }
        int get_standard()
        {
            return std;
        }
        string to_string()
        {
            cout << age <<  "," << first_name << "," << second_name << "," << std;
            return " ";
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}