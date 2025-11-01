#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    map<char, int> freq;

    for(char c: s)
    {
        freq[c]++;
    }

    for(auto pair : freq)
    {
        cout << pair.first <<" -> "<<pair.second<<endl;
    }
    
    return 0;
}