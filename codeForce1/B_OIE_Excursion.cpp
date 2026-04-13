#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        unordered_set<long long> forbidden;

        for (int i = 0; i < n; i++)
        {
            long long val = (a[i] + (i + 1)) % m;
            long long k = (m - val) % m;
            forbidden.insert(k);
        }

        if ((long long)forbidden.size() == m)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}