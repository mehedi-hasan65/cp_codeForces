#include <bits/stdc++.h>
using namespace std;

const long long MOD = 676767677;

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<vector<int>> seqs;

        for (int x : a)
        {
            bool placed = false;
            for (auto &seq : seqs)
            {
                if (seq.back() <= x)
                {
                    seq.push_back(x);
                    placed = true;
                    break;
                }
            }
            if (!placed)
            {
                seqs.push_back({x});
            }
        }

        long long ans = 0;

        for (auto &seq : seqs)
        {
            long long prod = 1;
            for (int x : seq)
            {
                prod = (prod * x) % MOD;
            }
            ans = (ans + prod) % MOD;
        }

        cout << ans << '\n';
    }
}