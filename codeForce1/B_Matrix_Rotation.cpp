#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        int rotate = 4;
        bool isBeautiful = false;
        while (rotate--)
        {
            if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
            {
                isBeautiful = true;
            }
            int temp = arr[0][1], temp1 = arr[1][1];
            arr[0][1] = arr[0][0];
            arr[1][1] = temp;
            temp = arr[1][0];
            arr[1][0] = temp1;
            arr[0][0] = temp;
        }
        if (isBeautiful)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}