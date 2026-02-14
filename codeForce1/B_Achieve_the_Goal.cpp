#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int total = n * m;
    int sum = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    int last = total - sum;

    if (last > k)
    {
        cout << "-1" << endl;
    }
    else
    {
        if (last < 0)
        {
            cout << "0" << endl;
        }

        else
        {
            cout << "last" << endl;
        }
    }

    return 0;
}