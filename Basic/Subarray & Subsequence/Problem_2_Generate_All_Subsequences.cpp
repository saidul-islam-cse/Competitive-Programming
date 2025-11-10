#include <bits/stdc++.h>
using namespace std;
void generateSubsequence(vector<int> &arr, int index, vector<int> &curr)
{
    cout<<endl;
    if (index == arr.size())
    {
        for (int x : curr)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    curr.push_back(arr[index]);
    generateSubsequence(arr, index + 1, curr);

    curr.pop_back();
    cout<<"Index: "<<index<<endl;
    generateSubsequence(arr, index + 1, curr);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        arr.push_back(v);
    }
    vector<int> curr;
    generateSubsequence(arr, 0, curr);
    return 0;
}