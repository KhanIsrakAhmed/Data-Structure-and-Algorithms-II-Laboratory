#include <bits/stdc++.h>
using namespace std;

int maxSubNonNeg(vector<int> &arr, int low, int high)
{
    if (low == high)
    {
        return arr[low];
    }

    int mid = low + (high - low) / 2;

    int left_sum = maxSubNonNeg(arr, low, mid);
    int right_sum = maxSubNonNeg(arr, mid + 1, high);

    int max_so_far = max(left_sum, right_sum);

    int crossing_sum = 0;
    int max_ending_here = 0;

    for (int i = mid; i >= low; i--)
    {
        crossing_sum += arr[i];
        max_ending_here = max(max_ending_here, crossing_sum);
    }

    crossing_sum = 0;
    max_ending_here = 0;

    for (int i = mid + 1; i <= high; i++)
    {
        crossing_sum += arr[i];
        max_ending_here = max(max_ending_here, crossing_sum);
    }

    return max(max_so_far, max_ending_here);
}

int main()
{
    vector<int> arr = {-2, -5, 6, -2, -3, 1, 5, -6};
    int result = maxSubNonNeg(arr, 0, arr.size() - 1);
    cout << result << endl;

    return 0;
}
