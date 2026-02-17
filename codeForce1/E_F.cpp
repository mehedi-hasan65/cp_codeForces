#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int flag = 1;

    for (int j = 0; j < 7; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            flag = 0;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] % 25 != 0)
        {
            flag = 0;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < 100 || arr[i] > 675)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}

int flag = 1;

for (int i = 0; i < 8; i++)
{
    if (arr[i] < 100 || arr[i] > 675)
    {
        flag = 0;
        break;
    }
}

for (int i = 0; i < 8; i++)
{
    if (arr[i] % 25 != 0)
    {
        flag = 0;
        break;
    }
}

for (int i = 0; i < 7; i++)
{
    if (arr[i] > arr[i + 1])
    {
        flag = 0;
        break;
    }
}

if (flag == 1)
    printf("Yes\n");
else
    printf("No\n");

return 0;
}