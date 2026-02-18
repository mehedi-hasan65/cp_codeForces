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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i]++;
            int m = 1;
            for (int j = 0; j < n; j++)
            {
                m *= arr[j];
            }
            if (m > ans)
            {
                ans = m;
            }
            arr[i]--;
        }
        cout << ans << endl;
    }
    return 0;
}
