#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;

    cin >> s;

    int freq[3];
    for (int i = 0; i < 3; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 65]++;
        if (freq[0] > 0 && freq[1] > 0 && freq[2] > 0)
        {
            cout << i + 1;
            break;
        }
    }
    cout << endl;
    return 0;
}