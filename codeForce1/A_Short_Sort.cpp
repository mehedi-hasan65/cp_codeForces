#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
            flag = 1;
        // 0,1
        char temp = s[1];
        s[1] = s[0];
        s[0] = temp;
        if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
            flag = 1;
        temp = s[1];
        s[1] = s[0];
        s[0] = temp;

        temp = s[2];
        s[2] = s[0];
        s[0] = temp;
        if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
            flag = 1;
        temp = s[2];
        s[2] = s[0];
        s[0] = temp;

        temp = s[2];
        s[2] = s[1];
        s[1] = temp;
        if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
            flag = 1;
        temp = s[2];
        s[2] = s[1];
        s[1] = temp;

        if (flag == 1)
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