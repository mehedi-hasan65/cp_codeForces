#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '|')
        {
            a = i;
            break;
        }
    }
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == a)
            continue;
        if (s[i] == '|')
        {
            b = i;
            break;
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            c = i;
            break;
        }
    }
    if (a < c && b > c)
    {
        cout << "in" << endl;
    }
    else
    {
        cout << "out" << endl;
    }
    return 0;
}