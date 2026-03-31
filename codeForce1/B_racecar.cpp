#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str[n][51];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    bool isOk = false;
    for (fs = 0; fs < str.length(); fs++)
    {
        for (ls = 0; ls < str.length(); ls++)
        {
            if (fs == ls)
            {
                continue;
            }
            string newstr[101];
            for (int i = 0; i < str[fs].length(); i++)
            {
                newstr[i] = str[fs][i];
            }
            for (int i = 0; i < str[ls].length(); i++)
            {
                newstr[str[fs].length() + i] = str[ls][i];
            }
            bool isPalindrome = true;
            for (int first = 0, last = newstr.length() - 1; first < last; first++, last--)
            {
                if (newstr[first] != newstr[last])
                    isPalindrome = false;
            }
            if (isPalindrome)
                isOk = true;
        }
    }
    if (isOk)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}