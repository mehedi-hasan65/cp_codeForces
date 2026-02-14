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
        int maxQuality = INT_MIN;
        int response = 0;
        for (int i = 1; i <= n; i++)
        {
            int length, quality;
            cin >> length >> quality;
            if (length > 10)
            {
                continue;
            }
            if (quality > maxQuality)
            {
                maxQuality = quality;
                response = i;
            }
        }
        cout << response << endl;
    }
    return 0;
}