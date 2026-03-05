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
        string s;
        cin >> s;
        string s1(n, ' ');
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e')
            {
                s1[i] = 'V';
            }
            else
            {
                s1[i] = 'C';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i + 2 == n)
            {
                cout << s[i] << s[i + 1];
                break;
            }
            else if (i + 2 == n - 1)
            {
                cout << s[i] << s[i + 1] << s[i + 2];
                break;
            }
            if (s1[i + 3] == 'V')
            {
                cout << s[i] << s[i + 1] << '.';
                i++;
            }
            else
            {
                cout << s[i] << s[i + 1] << s[i + 2] << ".";
                i += 2;
            }
        }
        cout << endl;
    }
    return 0;
}
