#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr[7];
        for (int j = 0; j < 7; j++)
        {
            cin >> arr[j];
        }
        int ans = 0;
        for (int j = 0; j < 7; j++)
        {
            ans += arr[j];
        }
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}