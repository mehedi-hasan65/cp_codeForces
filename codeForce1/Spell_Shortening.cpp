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
        string s;
        cin >> s;
        int ind = -1;
        for (int i = 0; i <= n - 2; i++)
        {
            if (s[i] > s[i + 1])
            {
                ind = i;
                break;
            }
        }
        if (ind == -1)
        {
            ind = n - 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == ind)
                continue;
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}