#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int f[n + 1];
    for (int i = 1; i <= n; i++)
    {
        f[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (f[i] == 0)
        {
            f[arr[i]] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (f[i] == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    for (int i = 1; i <= n; i++)
    {
        if (f[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}