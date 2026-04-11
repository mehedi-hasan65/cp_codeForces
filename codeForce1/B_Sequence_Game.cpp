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
        bool isEqual = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                isEqual = false;
                break;
            }
        }
        if (isEqual == true)
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        if (isEqual == false)
        {
            int arr2[n + 1];
            for (int i = 0; i < n; i++)
            {
                arr2[i] = arr[i];
            }
            arr2[n] = 1;
            cout << n + 1 << endl;
            for (int i = 0; i < n + 1; i++)
            {
                cout << arr2[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}