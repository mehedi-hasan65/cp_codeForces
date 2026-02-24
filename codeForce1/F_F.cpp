#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == x)
            {
                cout << "YES";
                break;
            }
            else
            {
                cout << "NO";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}