#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rev = 0, rem;
    long long num;
    printf("Enter the number:");
    scanf("%lld", &num);
    while (n != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("The reverse=%d", rev);
    return 0;
}
