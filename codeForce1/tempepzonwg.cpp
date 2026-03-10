#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'A']++;
    }
    if (n % 2 == 0)
    {
        int flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "NO SOLUTION" << endl;
        else
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = 'A' + i;
                    cout << ch;
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = 'A' + i;
                    cout << ch;
                }
            }
        }
    }
    else
    {
        int cnt = 0, ind = -1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                cnt++;
                ind = i;
            }
        }
        if (cnt == 1)
        {
            for (int i = 0; i < 26; i++)
            {
                if (i != ind)
                {
                    for (int j = 0; j < freq[i] / 2; j++)
                    {
                        char ch = 'A' + i;
                        cout << ch;
                    }
                }
            }
            for (int j = 0; j < freq[ind]; j++)
            {
                char ch = 'A' + ind;
                cout << ch;
            }
            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = 'A' + i;
                    cout << ch;
                }
            }
        }
        else
            cout << "NO SOLUTION" << endl;
    }
    cout << endl;
    return 0;
}