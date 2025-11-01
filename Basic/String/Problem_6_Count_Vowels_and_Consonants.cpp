#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int vowel = 0;
    int consonant = 0;

    for (char c : s)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowel++;
        }
        else
            consonant++;
    }
    cout << "Vowel: " << vowel << endl
         << "Consonant: " << consonant;
}