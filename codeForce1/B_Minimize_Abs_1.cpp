#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (l > arr[i])
        {
            cout << l << " ";
        }
        else if (l <= arr[i] && arr[i] <= r)
        {
            cout << arr[i] << " ";
        }
        else

        {
            cout << r << " ";
        }
    }
    cout << endl;
    return 0;
}