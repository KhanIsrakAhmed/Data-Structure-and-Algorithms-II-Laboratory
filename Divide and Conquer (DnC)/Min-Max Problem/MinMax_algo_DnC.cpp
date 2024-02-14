//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

class Result
{
public:
    int minimum;
    int maximum;
};

Result minMax(int arr[], int s, int e)
{
    if (e - s == 1 || s == e)
    {
        Result result;
        result.minimum = min(arr[s], arr[e]);
        result.maximum = max(arr[s], arr[e]);
        return result;
    }
    else
    {
        int mid = s + (e - s) / 2;
        Result leftSide = minMax(arr, s, mid);
        Result rightSide = minMax(arr, mid + 1, e);
        Result result;
        result.maximum = max(leftSide.maximum, rightSide.maximum);
        result.minimum = min(leftSide.minimum, rightSide.minimum);
        return result;
    }
}

int main()
{
    int n = 8;
    int arr[n] = {-2, -5, 6, -2, -3, 1, 5, -6};
    Result result = minMax(arr, 0, n - 1);
    cout << "Minimum value: " << result.minimum << "\n";
    cout << "Maximum value: " << result.maximum << "\n";
    return 0;
}
