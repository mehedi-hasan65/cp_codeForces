#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t = (i % 4);
        if (t < 2)
            cout << 'a';
        else
            cout << 'b';
    }

    cout << '\n';
    return 0;
}