#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr1[101];
    int arr2[101];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr1[i];
    }

    for (int j = 1; j <= k; j++)
    {
        cin >> arr2[j];
    }
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        int ind = arr2[i];
        sum += arr1[ind];
    }
    cout << sum << endl;
    return 0;
}