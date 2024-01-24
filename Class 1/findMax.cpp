//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    01-10-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    cout << "Enter the size of the array is 3 " << endl;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int firstMax = max(arr[0], arr[1]);
    int Max = max(firstMax, arr[2]);

    cout << "Max Number " << Max << endl;

    return 0;
}