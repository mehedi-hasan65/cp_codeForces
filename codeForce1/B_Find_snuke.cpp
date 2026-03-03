#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    char arr[h + 1][w + 1];
    for (int i = 1; i < h; i++)
    {
        for (int j = 1; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = h - 1; i >= 0; i--)
    {
        for (int j = w - 1; j >= 0; j--)
        {
            if (arr[i][j] == 's')
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }
    for (int i = h - 1; i >= 1; i--)
    {
        for (int j = w - 1; j >= 1; j--)
        {
            if (arr[i][j] == 'n')
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }
    for (int i = h - 1; i >= 1; i--)
    {
        for (int j = w - 1; j >= 1; j--)
        {
            if (arr[i][j] == 'u')
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }
    for (int i = h - 1; i >= 1; i--)
    {
        for (int j = w - 1; j >= 1; j--)
        {
            if (arr[i][j] == 'k')
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }
    for (int i = h - 1; i >= 1; i--)
    {
        for (int j = w - 1; j >= 1; j--)
        {
            if (arr[i][j] == 'e')
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }
    return 0;
}