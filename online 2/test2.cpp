//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int maxpeek(int arr[], int left, int right)
{
    int highest = 0;
    int cntt = 0;
    if (left == right)
    {
        cntt++;
        highest = arr[left];

        return highest;
    }
    else if (left + 1 == right) // 2 number
    {
        if (arr[left] > arr[right])
        {
            highest = arr[left];
        }
        else
            highest = arr[right];

        return highest;
    }
    else
    {
        int mid = (left + right) / 2;
        int frnd1 = maxpeek(arr, left, mid);
        int frnd2 = maxpeek(arr, mid + 1, right);

        highest = max(frnd1, frnd2);
        return highest;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    int result = maxpeek(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        if (result == arr[i])
        {
            index = i;
        }
    }
    cout << "Index " << index << " ->"
         << "Peek " << result << endl;

    return 0;
}