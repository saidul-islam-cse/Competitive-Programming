#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int pre[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int up = (i > 0) ? pre[i - 1][j] : 0;
            int left = (j > 0) ? pre[i][j - 1] : 0;
            int dup = (i > 0 && j > 0) ? pre[i - 1][j - 1] : 0;
            pre[i][j] = matrix[i][j] + up + left - dup;
        }
    }
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int total = pre[r2][c2] - (r1 > 0 ? pre[r1 - 1][c2] : 0) - (c1 > 0 ? pre[r2][c1 - 1] : 0) + (r1 > 0 && c1 > 0 ? pre[r1 - 1][c1 - 1] : 0);

    cout << "Sum from (" << r1 << "," << c1 << ") to (" << r2 << "," << c2 << ") = " << total;
    return 0;
}