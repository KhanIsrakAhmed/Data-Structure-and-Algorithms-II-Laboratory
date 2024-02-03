#include <bits/stdc++.h>
using namespace std;

long long mergeAndCount(vector<int> &arr, vector<int> &temp, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    long long inversions = 0;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            // Inversion found
            temp[k++] = arr[j++];
            inversions += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }

    return inversions;
}

long long mergeSortAndCount(vector<int> &arr, vector<int> &temp, int left, int right)
{
    long long inversions = 0;

    if (left < right)
    {
        int mid = left + (right - left) / 2;
        inversions += mergeSortAndCount(arr, temp, left, mid);
        inversions += mergeSortAndCount(arr, temp, mid + 1, right);
        inversions += mergeAndCount(arr, temp, left, mid, right);
    }

    return inversions;
}

long long getInversionCount(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp(n);
    return mergeSortAndCount(arr, temp, 0, n - 1);
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Length of the array
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; // Input array elements
        }

        long long inversionCount = getInversionCount(arr);
        cout << inversionCount << endl; // Output inversion count for each test case
    }

    return 0;
}
