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

Result minMax(int arr[], int index, int lastIndex)
{
    if (index == lastIndex)
    {
        Result result;
        result.minimum = arr[index];
        result.maximum = arr[index];
        return result;
    }
    else
    {
        Result friend_ = minMax(arr, index + 1, lastIndex);
        Result result;
        result.minimum = min(arr[index], friend_.minimum);
        result.maximum = max(arr[index], friend_.maximum);
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
