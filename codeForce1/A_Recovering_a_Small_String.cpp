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
        bool gotAnswer = false;
        for (char s = 'a'; s <= 'z'; s++)
        {
            for (char t = 'a'; t <= 'z'; t++)
            {
                for (char u = 'a'; u <= 'z'; u++)
                {
                    int sv = s - 'a' + 1;
                    int tv = t - 'a' + 1;
                    int uv = u - 'a' + 1;
                    if (sv + tv + uv == n)
                    {
                        gotAnswer = true;
                        cout << s << t << u << endl;
                        break;
                    }
                }
                if (gotAnswer)
                    break;
            }

            if (gotAnswer)
                break;
        }
    }
    return 0;
}