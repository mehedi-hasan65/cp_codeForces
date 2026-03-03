#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int n = s.length();
    string p;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            p[i] = '1';
        }
        else if ((s[i] == '1'))
        {
            p[i] = '0';
        }
    }
    cout << p << endl;
    return 0;
}
