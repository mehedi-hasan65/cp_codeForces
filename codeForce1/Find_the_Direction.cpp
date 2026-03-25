#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int n = x % 4;
        if (n == 0)
            cout << "North" << endl;
        if (n == 1)
            cout << "East" << endl;
        if (n == 2)
            cout << "South" << endl;
        if (n == 3)
            cout << "West " << endl;
    }
    return 0;
}
