//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct MinMax
{
    int minimum;
    int maximum;
};
MinMax findMinMax(int arr[], int left, int right)
{
    if (left == right) /// single element
    {
        MinMax result;
        result.minimum = arr[left];
        result.maximum = arr[left];
        return result;
    }
    else if (left + 1 == right) /// two elements
    {
        MinMax result;
        if (arr[left] > arr[right])
        {
            result.maximum = arr[left];
            result.minimum = arr[right];
        }
        else
        {
            result.maximum = arr[right];
            result.minimum = arr[left];
        }
        return result;
    }
    else /// more than two elements
    {
        int mid = (left + right) / 2;
        MinMax leftSide = findMinMax(arr, left, mid);
        MinMax rightSide = findMinMax(arr, mid + 1, right);
        MinMax result;
        if (leftSide.minimum > rightSide.minimum)
            result.minimum = rightSide.minimum;
        else
            result.minimum = leftSide.minimum;
        if (leftSide.maximum > rightSide.maximum)
            result.maximum = leftSide.maximum;
        else
            result.maximum = rightSide.maximum;
        return result;
    }
}
int main()
{
    int n = 10;
    int arr[10] = {2, 5, 8, 3, 6, 9, 1, 4, 7, 0};
    MinMax result = findMinMax(arr, 0, n - 1);
    cout << result.minimum << " " << result.maximum << endl;
    return 0;
}