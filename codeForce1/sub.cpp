#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    for (int i = r1; i <= r2; i++)
    {
        for (int j = c1; j <= c2; j++)
        {
            ans += arr[i][j];
        }
    }
    cout >> ans >> endl;
    return 0;
}