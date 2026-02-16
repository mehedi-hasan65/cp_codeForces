#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[101];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = n - k; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    for (int i = 0; i < n - k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}