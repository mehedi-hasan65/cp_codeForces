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
        int n = s.length();
        bool isOk = false;
        for (int A = 0; A <= 1; A++)
        {
            for (int B = 0; B <= 1; B++)
            {
                for (int C = 0; C <= 1; C++)
                {
                    bool isValid = true;
                    int o = 0, c = 0;

                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'A')
                        {
                            if (A == 0)
                            {
                                o++;
                            }
                            else
                            {
                                c++;
                            }
                        }
                        else if (s[i] == 'B')
                        {
                            if (B == 0)
                            {
                                o++;
                            }
                            else
                            {
                                c++;
                            }
                        }
                        else
                        {
                            if (C == 0)
                            {
                                o++;
                            }
                            else
                            {
                                c++;
                            }
                        }
                        if (o < c)
                        {
                            isValid = false;
                        }
                    }
                    if (o != c)
                    {
                        isValid = false;
                    }
                    if (isValid)
                    {
                        isOk = true;
                    }
                }
            }
        }
        if (isOk)
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