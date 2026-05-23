#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (a + b < n)
        {
            cout << "-1" << endl;
        }
        else
        {
            int p[n] = {0};
            p[0] = a;
            p[n - 1] = b;
            for (int i = 1; i < n / 2; i++)
            {
                if (i != a && i != b)
                {
                    p[i] = i;
                }
                else
                {
                    p[i] = i + 1;
                }
            }

            for (int i = n / 2; i < n - 1; i++)
            {
                if (i != b && i != a)
                {
                    p[i] = i;
                }
                else
                {
                    p[i] = i + 1;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}