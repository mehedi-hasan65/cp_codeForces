#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxfreq[26];
    for (int i = 0; i < 26; i++)
    {
        maxfreq[i] = 0;
    }
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {

            if (maxfreq[s[i - 1] - 'a'] < count)
            {
                maxfreq[s[i - 1] - 'a'] = count;
            }
            count = 1;
        }
    }
    if (maxfreq[s[n - 1] - 'a'] < count)
    {
        maxfreq[s[n - 1] - 'a'] = count;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        ans += maxfreq[i];
    }
    cout << ans << endl;
    return 0;
}