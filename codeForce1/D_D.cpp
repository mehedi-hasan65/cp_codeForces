#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;

    char arr[n][d];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> arr[i][j];
        }
    }
    int free[d];
    for (int j = 0; j < d; j++)
    {
        int got = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == 'x')
            {
                got = 1;
                break;
            }
        }
        if (got == 1)
        {
            free[j] = 0;
        }
        else
        {
            free[j] = 1;
        }
    }
    int ans = 0;
    for (int j = 0; j < d; j++)
    {

        if (free[j] == 1)
        {
            int length = 1;
            for (int j2 = j + 1; j2 < d; j2++)
            {
                if (free[j2] == 1)
                {
                    length++;
                }
                else
                {
                    break;
                }
            }

            if (length > ans)
            {
                ans = length;
            }
        }
    }
    cout << ans << endl;
    return 0;
}