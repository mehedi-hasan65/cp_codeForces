#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long xK, yK, xQ, yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;

        set<pair<long long, long long>> kingPos, queenPos;

        // all 8 moves
        vector<pair<long long, long long>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        // positions attacking king
        for (auto [dx, dy] : moves)
        {
            kingPos.insert({xK + dx, yK + dy});
        }

        // positions attacking queen
        for (auto [dx, dy] : moves)
        {
            queenPos.insert({xQ + dx, yQ + dy});
        }

        // count intersection
        int ans = 0;
        for (auto pos : kingPos)
        {
            if (queenPos.count(pos))
                ans++;
        }

        cout << ans << endl;
    }
}