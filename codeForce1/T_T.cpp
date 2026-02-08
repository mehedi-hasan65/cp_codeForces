#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x > n)
        {
            int p = 2 * n - x;
            int r = 2 * (n - p);
            cout << r << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}