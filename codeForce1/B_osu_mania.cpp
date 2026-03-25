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
        char arr[n + 1][5];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= 4; j++)
            {
                if (arr[i][j] == '#')
                {
                    cout << j << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}