//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-09-2023     *************************\

/**find the count of even numbers in an array Arr of N integers **/

#include <bits/stdc++.h>
using namespace std;

int countEven(int Arr[], int i, int j)
{
    if (i == j)
    { // Base case: array size 1
        if (Arr[i] % 2 == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        int mid = (i + j) / 2;
        int c1 = countEven(Arr, i, mid);     // Recursively count even numbers in the first half
        int c2 = countEven(Arr, mid + 1, j); // Recursively count even numbers in the second half
        return c1 + c2;                      // Combine the counts from both halves
    }
}

int countOdd(int Arr[], int i, int j)
{
    if (i == j)
    { // Base case: array size 1
        if (Arr[i] % 2 != 0)
            return 1; // Return 1 if the element is odd
        else
            return 0; // Return 0 if the element is even
    }
    else
    {
        int mid = (i + j) / 2;
        int c1 = countOdd(Arr, i, mid);     // Recursively count odd numbers in the first half
        int c2 = countOdd(Arr, mid + 1, j); // Recursively count odd numbers in the second half
        return c1 + c2;                     // Combine the counts from both halves
    }
}

int main()
{
    int A[] = {6, 11, 4, 5, 8, 2};
    int N = sizeof(A) / sizeof(A[0]);
    cout << "Count of even numbers: " << countEven(A, 0, N - 1) << endl;
    cout << "Count of odd numbers: " << countOdd(A, 0, N - 1) << endl;
    return 0;
}
