#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t;

    cin >> s;
    cin >> t;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {

        if (s[i] != t[i])
        {
            if (!(s[i] == 'l' && t[i] == '1') && !(s[i] == '1' && t[i] == 'l') && !(s[i] == 'o' && t[i] == '0') && !(s[i] == '0' && t[i] == 'o'))
                flag = 0;
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