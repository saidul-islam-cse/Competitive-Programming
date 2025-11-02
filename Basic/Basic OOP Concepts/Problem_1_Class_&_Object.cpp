#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    float cgpa;

    void inputData()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter CGPA: ";
        cin >> cgpa;
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
    Student st;
    st.inputData();
    st.displayData();

    return 0;
}