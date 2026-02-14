#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int mx = a;
        int mn = a;
        int sum = a + b + c;
        if (b > mx)
        {
            mx = b;
        }
        if (c > b)
        {
            mx = c;
        }
        if (b < mn)
        {
            mn = b;
        }
        if (c < b)
        {
            mn = c;
        }
        int md = sum - mx - mn;
        int alice = 100 * mx + 10 * md + mn;

        mx = d;
        mn = d;
        sum = d + e + f;
        if (e > mx)
        {
            mx = e;
        }
        if (f > e)
        {
            mx = f;
        }
        if (e < mn)
        {
            mn = e;
        }
        if (f < e)
        {
            mn = e;
        }
        md = sum - mx - mn;
        int bob = 100 * mx + 10 * md + mn;
        if (alice > bob)
        {
            cout << "ALICE" << end;
        }
        else if (bob > alice)
        {
            cout << "BOB" << end;
        }
        else if (alice == bob)
        {
            cout << "TIE" << endl;
        }
    }
    return 0;
}