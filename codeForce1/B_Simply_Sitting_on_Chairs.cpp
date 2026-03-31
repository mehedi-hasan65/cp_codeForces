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
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];

        vector<bool> marked(n + 1, false);

        int ans = 0;
        int limit = n + 1; // earliest future marked position

        for (int i = 1; i <= n; i++)
        {
            if (marked[i])
                break;

            if (p[i] < i)
            {
                // safe
                ans++;
                marked[p[i]] = true;
            }
            else
            {
                // risky
                if (p[i] < limit)
                {
                    ans++;
                    marked[p[i]] = true;
                    limit = min(limit, p[i]);
                }
            }
        }

        cout << ans << "\n";
    }
}