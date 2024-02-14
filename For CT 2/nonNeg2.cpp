//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\

#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int size)
{
    int maxSum = INT_MIN; // Initialize the maximum sum as the minimum integer value
    int currentSum = 0;

    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i];

        if (currentSum < 0)
        {
            currentSum = 0;
        }

        if (maxSum < currentSum)
        {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main()
{
    int arr[8] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubArraySum(arr, size);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
