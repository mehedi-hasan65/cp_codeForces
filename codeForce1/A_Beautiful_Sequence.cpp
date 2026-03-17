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
        int value;
        bool isBeautiful = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> value;
            if (value <= i)
                isBeautiful = true;
        }
        if (isBeautiful)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}