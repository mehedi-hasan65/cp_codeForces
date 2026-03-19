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
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int t = n / 10;
            int q = t * 10;
            for (int i = q; i <= q + 10; i++)
            {
                if (i % 7 == 0)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}