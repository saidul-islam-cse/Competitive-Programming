#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    int id;
    float cgpa;

    void setData(string n, int a, int i, float c)
    {
        name = n;
        age = a;
        id = i;
        cgpa = c;
    }

    void displayData()
    {
        cout << endl
             << "----- Student information -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main()
{
    Student st;
    st.setData("Saidul", 26, 102, 3.85);
    st.displayData();

    return 0;
}