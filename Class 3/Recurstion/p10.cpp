/*Find the smallest element of a given array*/
//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int smallestElement(int arr[], int index)
{
    if (index == 0)
        return arr[index];
    else
    {
        int crnt = arr[index];
        int req = smallestElement(arr, index - 1);
        return min(crnt, req);
    }
}
int main()
{
    cout << "Enter Array size" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = smallestElement(arr, n - 1);
    cout << x << endl;
    return 0;
}