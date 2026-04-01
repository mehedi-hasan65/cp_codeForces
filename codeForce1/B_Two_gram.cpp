#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s;
    cin >> n >> s;

    int maxCount = 0;
    string s2 = "AA";
    for (char c1 = 'A'; c1 <= 'Z'; c1++)
    {
        for (char c2 = 'A'; c2 <= 'Z'; c2++)
        {
            int count = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == c1 && s[i + 1] == c2)
                {
                    count++;
                }
            }
            if (maxCount < count)
            {
                maxCount = count;
                s2[0] = c1;
                s2[1] = c2;
            }
        }
    }
    cout << s2 << endl;
    return 0;
}
