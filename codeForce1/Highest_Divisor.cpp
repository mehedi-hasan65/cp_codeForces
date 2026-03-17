#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i <= 10; i++)
    {
        if (n % i == 0)
        {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
