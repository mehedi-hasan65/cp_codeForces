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
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum = sum + ar[i];
        }
        int t = sum / n;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (t < ar[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}