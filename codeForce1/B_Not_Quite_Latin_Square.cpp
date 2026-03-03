#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[3][4];
        for (int i = 0; i < 3; i++)
        {

            cin >> s[i];
        }
        int freq[3];
        for (int i = 0; i < 3; i++)
        {
            freq[i] = 0;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (s[i][j] != '?')
                {
                    freq[s[i][j] - 65]++;
                }
            }
        }
        if (freq[0] == 2)
        {
            cout << "A" << endl;
        }
        if (freq[1] == 2)
        {
            cout << "B" << endl;
        }
        if (freq[2] == 2)
        {
            cout << "C" << endl;
        }
    }
    return 0;
}
