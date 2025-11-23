#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curr = 0, mx = INT_MIN;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < n; i++)
    {
        curr += arr[i];

        if (curr < arr[i])
        {
            curr = arr[i];
            tempStart = i;
        }

        if (curr > mx)
        {
            mx = curr;
            start = tempStart;
            end = i;
        }
    }

    cout << "Max Sum: " << mx << endl;
    cout << "Start Index: " << start << endl;
    cout << "End Index: " << end << endl;

    cout << "Subarray: [ ";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ]";
    return 0;
}