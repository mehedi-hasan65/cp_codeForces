#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        int S = 0, c2 = 0, c3 = 0;

        for (char d : n)
        {
            int x = d - '0';
            S += x;

            if (x == 2)
                c2++;
            if (x == 3)
                c3++;
        }

        S %= 9;

        bool ok = false;

        for (int a = 0; a <= min(c2, 8); a++)
        {
            for (int b = 0; b <= min(c3, 8); b++)
            {
                if ((S + 2 * a + 6 * b) % 9 == 0)
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
                break;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}