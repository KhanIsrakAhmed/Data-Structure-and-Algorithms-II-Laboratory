#include <bits/stdc++.h>
using namespace std;

int subOfNonNegArray(int arr[], int n)
{
    int sumForSubArray = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)

        {
            sumForSubArray = max(0, sumForSubArray + arr[i]);
            sum2 = max(sum2, sumForSubArray);
        }
        else
        {
            sumForSubArray = 0;
        }
    }
    return sumForSubArray;
}

int main()
{
    int n = 8;
    int arr[n] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int result = subOfNonNegArray(arr, n);
    cout << result << endl;
    return 0;
}
