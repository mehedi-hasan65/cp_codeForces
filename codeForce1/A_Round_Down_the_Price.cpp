#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        int l = s.length();
        double m = pow(10, l - 1);
        int ans = n - m;
        cout << ans << endl;
    }
    return 0;
}