#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    char arr[n][n], na[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j <= n - 2; j++)
    {
        na[0][j + 1] = arr[0][j];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        na[i + 1][n - 1] = arr[i][n - 1];
    }
    for (int j = 1; j <= n - 1; j++)
    {
        na[n - 1][j - 1] = arr[n - 1][j];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        na[i - 1][0] = arr[i][0];
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            na[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << na[i][j];
        }
        cout << endl;
    }
    return 0;
}