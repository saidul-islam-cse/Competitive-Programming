#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    float cgpa;

    Student(string n, int i, float c)
    {
        name = n;
        id = i;
        cgpa = c;
    }

    void displayData()
    {
        cout << endl
             << "----- Student information -----" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main()
{
    Student st("Saidul", 101, 3.75);
    st.displayData();

    return 0;
}