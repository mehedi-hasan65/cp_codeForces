

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int size = n - 1;
    int arr[size];

    // input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // bubble sort (ascending)
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 1; i < size - 1; i++)
    {
        sum += arr[i];
    }

    int finalGrade = x - sum;

    if (finalGrade >= 0 && finalGrade <= 100)
        cout << finalGrade << endl;
    else
        cout << "-1" << endl;

    return 0;
}