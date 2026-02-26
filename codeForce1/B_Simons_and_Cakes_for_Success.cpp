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
        for (long long i = 1; i <= 1000000000; i++)
        {
            long long result = pow(i, n);
            {
                if (result % n == 0)
                {
                    cout << i;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        cout << endl;
    }
    return 0;
}