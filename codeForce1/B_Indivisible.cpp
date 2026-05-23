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
        if (n == 1)
            cout << "1" << endl;
        else
        {
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum = sum + i;
            }
            if (sum % n != 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " ";
                }
            }
            else
                cout << "-1";
            cout << endl;
        }
    }
    return 0;
}