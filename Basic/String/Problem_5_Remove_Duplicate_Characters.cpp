#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    string result = "";

    set<char> seen;
    for (char c : s)
    {
        if (seen.find(c) == seen.end()) // যদি character আগে দেখা না হয়ে থাকে
        {
            result += c;
            seen.insert(c); // set এ add করে রাখ, যেন পরেরবার না নেয়
        }
    }
    cout << result << endl;
    return 0;
}