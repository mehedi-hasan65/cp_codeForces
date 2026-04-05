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

        string x, s;
        cin >> x >> s;

        int ans = -1;

        for (int op = 0; op <= 5; op++)
        {
            bool isSubstring = false;

            // check if s is substring of x
            for (int i = 0; i + m <= n; i++)
            {
                bool matched = true;
                for (int j = 0; j < m; j++)
                {
                    if (x[i + j] != s[j])
                    {
                        matched = false;
                        break; // optimization
                    }
                }
                if (matched)
                {
                    isSubstring = true;
                    break;
                }
            }

            if (isSubstring)
            {
                ans = op;
                break;
            }

            if (op == 5)
                break;

            // safely double the string
            x = x + x;
            n = x.length();
        }

        cout << ans << endl;
    }
    return 0;
}