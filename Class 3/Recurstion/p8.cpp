//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n, int index)
{
    if (index == n)
        return;
    else
    {
        cout << arr[index] << " ";
        printArray(arr, n, index + 1);
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
    printArray(arr, n, 0);
    return 0;
}
