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
        int ans = 0;
        for (int firstDigit = 1; firstDigit <= 9; firstDigit++)
        {
            int num = firstDigit;
            while (num <= n)
            {
                ans++;
                num = num * 10;
            }
        }
        cout << ans << endl;
    }

    return 0;
}