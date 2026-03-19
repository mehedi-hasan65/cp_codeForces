#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        for (int y = x;; y++)
        {
            int sum = 0;
            int value = y;

            while (value > 0)
            {
                sum = sum + value % 10;
                value = value / 10;
            }
            if (sum % k == 0)
            {
                cout << y << endl;
                break;
            }
        }
    }

    return 0;
}