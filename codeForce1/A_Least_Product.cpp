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
        bool isNegative = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                isNegative = true;
            }
        }
        if (isNegative)
            cout << "0" << endl;

        else
            cout << "1" << endl;
    }
    return 0;
}