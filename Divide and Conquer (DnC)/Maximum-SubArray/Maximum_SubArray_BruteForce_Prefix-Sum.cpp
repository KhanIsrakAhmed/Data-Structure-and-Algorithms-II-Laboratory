//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    23-12-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // n = 8;
    // int arr[8] = {-2, -5, 6, -2, -3, 1, 5, -6};

    n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum > maxSum)
                maxSum = sum;
        }
    }

    cout << "Maximum Sum: " << maxSum << endl;

    return 0;
}
