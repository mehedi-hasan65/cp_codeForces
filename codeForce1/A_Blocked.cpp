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
        bool isOk = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum = sum + arr[i];
        }

        if (sum <= arr[n - 1])
        {
            int temp = 0;
            temp = arr[0];
            arr[0] = arr[n - 1];
            arr[n - 1] = temp;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}