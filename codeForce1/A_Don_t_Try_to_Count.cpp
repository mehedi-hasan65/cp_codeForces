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

            
            for (int i = 0; i + m <= n; i++)
            {
                bool matched = true;
                for (int j = 0; j < m; j++)
                {
                    if (x[i + j] != s[j])
                    {
                        matched = false;
                        break; 
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

            
            x = x + x;
            n = x.length();
        }

        cout << ans << endl;
    }
    return 0;
}