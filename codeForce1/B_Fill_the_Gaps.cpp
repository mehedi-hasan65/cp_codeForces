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

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] < arr[i + 1])
        {
            cout << arr[i] << " ";
            for (int j = arr[i] + 1; j <= arr[i + 1] - 1; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            cout << arr[i] << " ";
            for (int j = arr[i] - 1; j >= arr[i + 1] + 1; j--)
            {
                cout << j << " ";
                ;
            }
        }
    }
    cout << arr[n - 1];

    return 0;
}