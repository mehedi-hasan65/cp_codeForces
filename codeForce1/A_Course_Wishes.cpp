#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(k + 2), b(n);
        for (int i = 1; i <= k; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        // count how many in each level
        vector<int> cnt(k + 2, 0);
        for (int i = 0; i < n; i++)
            cnt[b[i]]++;

        vector<int> ops;

        while (true)
        {
            bool done = true;
            for (int i = 0; i < n; i++)
            {
                if (b[i] != k + 1)
                    done = false;
            }
            if (done)
                break;

            bool moved = false;

            for (int i = 0; i < n; i++)
            {
                if (b[i] == k + 1)
                    continue;

                int cur = b[i];
                int nxt = cur + 1;

                // check if we can move
                if (nxt == k + 1 || cnt[nxt] < a[nxt])
                {
                    cnt[cur]--;
                    cnt[nxt]++;
                    b[i]++;

                    ops.push_back(i + 1); // 1-based index
                    moved = true;
                    break;
                }
            }

            if (!moved)
            {
                cout << -1 << endl;
                goto next_case;
            }
        }

        cout << ops.size() << endl;
        for (int x : ops)
            cout << x << " ";
        cout << endl;

    next_case:;
    }

    return 0;
}