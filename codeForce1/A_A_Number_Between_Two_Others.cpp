#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        if (y == 2 * x)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}