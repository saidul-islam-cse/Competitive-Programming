#include <bits/stdc++.h>
using namespace std;
class Temp
{
public:
    Temp()
    {
        cout << "Constructor called" << endl;
    }
    ~Temp()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Temp tmp;
    cout << "Inside main fuction called" << endl;
    return 0;
}


// Explanation:

// Temp t1; → object তৈরি হয় → constructor কল হয়

// main() শেষ হলে object destroy হয় → destructor কল হয়