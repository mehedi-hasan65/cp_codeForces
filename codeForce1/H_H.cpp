#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int mx[m];
    int mn[n];
    for (int j = 0; j < m; j++)
    {
        mx[j] = -2000;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] > mx[j])
            {
                mx[j] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        mn[i] = 2001;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < mn[i])
            {
                mn[i] = arr[i][j];
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            if (arr[i][j] == mn[i] && arr[i][j] == mx[j])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}