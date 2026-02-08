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
        int m = n;
        int count = 0;
        while (m > 0)
        {
            int lastDigit = m % 10;
            m /= 10;
            if (lastDigit > 0)
            {
                count++;
            }
        }
        int p = 1;
        cout << count << endl;
        while (n > 0)
        {
            int lastDigit = n % 10;
            n /= 10;
            if (lastDigit != 0)
            {
                int round = lastDigit * p;
                cout << round << " " << endl;
            }
            p *= 10;
        }
    }
    return 0;
}