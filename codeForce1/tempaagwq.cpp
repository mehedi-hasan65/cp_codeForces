#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cout << "Enter testCase : ";
    cin >> testCase;
    int count = 1;

    for (int i = 0;; i++)
    {

        if (i % 3 == 0)
        {
            continue;
        }

        if (i % 10 == 3)
        {
            continue;
        }
        if (count == testCase)
        {
            cout << i << endl;
            count++;
            break;
        }
    }

    return 0;
}
