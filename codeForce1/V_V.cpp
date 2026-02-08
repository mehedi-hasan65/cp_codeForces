#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a_1, a_2, b_1, b_2;
        cin >> a_1 >> a_2 >> b_1 >> b_2;
        int e = a_1 - a_2;
        int i = b_1 - b_2;
        int s = e + i;
        if (s < 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}