#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    while (true)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
            break;
    }
    while (true)
    {
        if (n % 3 == 0)
        {
            n /= 3;
        }
        else
            break;
    }
    if (n == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}