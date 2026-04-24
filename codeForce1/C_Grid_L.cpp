#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long p, q;
        cin >> p >> q;

        long long S = p + 2 * q;

        // Case: only one L-shape
        if (q == 1)
        {
            cout << -1 << endl;
            continue;
        }

        // Area must be even for 2×m grid
        if (S % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        // Otherwise always possible
        cout << 2 << " " << S / 2 << endl;
    }

    return 0;
}