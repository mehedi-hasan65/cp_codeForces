#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {

        if (arr[i] > arr[i - 1])
        {
            ans = arr[i];
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}