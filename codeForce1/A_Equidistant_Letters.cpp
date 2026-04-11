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
        int a[26] = {0};
        for (int i = 0; i < s[i] != '\0'; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout << char('a' + i);
            }
        }
        cout << endl;
    }

    return 0;
}