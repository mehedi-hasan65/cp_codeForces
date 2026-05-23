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

        int x = n / 5;
        int y = n % 5;

        for (int i = 0; i < x; i++)
            cout << 'a';
        if (y)
        {
            cout << 'a';
            y--;
        }

        for (int i = 0; i < x; i++)
            cout << 'e';
        if (y)
        {
            cout << 'e';
            y--;
        }

        for (int i = 0; i < x; i++)
            cout << 'i';
        if (y)
        {
            cout << 'i';
            y--;
        }

        for (int i = 0; i < x; i++)
            cout << 'o';
        if (y)
        {
            cout << 'o';
            y--;
        }

        for (int i = 0; i < x; i++)
            cout << 'u';
        if (y)
        {
            cout << 'u';
            y--;
        }

        cout << '\n';
    }
    return 0;
}