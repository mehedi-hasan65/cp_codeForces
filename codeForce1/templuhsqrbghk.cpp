#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;

    cin >> n >> d;
    int t[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    int ans = -1;
    for (int j = 0; j < n; j++)
    {
        int x1 = t[j];
        int x2 = t[j + 1];
        if (x2 - x1 <= d)
        {
            ans = x2;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}