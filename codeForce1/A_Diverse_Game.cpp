#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n == 1 && m == 1)
        {
            int x;
            cin >> x;
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;

                x++;
                if (x > n * m)
                    x = 1;

                cout << x << " ";
            }
            cout << endl;
        }
    }
}