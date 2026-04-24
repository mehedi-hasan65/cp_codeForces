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
        int arr1[n];
        long long min = 1000000000;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (arr1[i] < min)
            {
                min = arr1[i];
            }
        }
        int arr[n];
        long long sum = 0;
        long long mb = 10e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < mb)
            {
                mb = arr[i];
            }
            sum = sum + arr[i] + min;
        }
        long long sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 = sum1 + arr1[i] + mb;
        }

        if (sum < sum1)
            cout << sum << endl;
        else
            cout << sum1 << endl;
    }
    return 0;
}