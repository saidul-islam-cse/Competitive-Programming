#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int vowel_count = 0;
    int cons_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowel_count++;
        }
        else
            cons_count++;
    }
    cout << "Vowel: " << vowel_count << endl
         << "Consonant: " << cons_count << endl;
    return 0;
}