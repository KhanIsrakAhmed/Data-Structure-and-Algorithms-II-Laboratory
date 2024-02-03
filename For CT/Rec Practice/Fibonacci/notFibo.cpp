//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    17-10-2023     *************************\

/*Fibonacci Series up to n number of terms*/

#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is a Fibonacci number
bool isFibonacci(int n)
{
    int a = 0, b = 1;
    while (a < n)
    {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return (a == n);
}

int findNthNonFibonacci(int n, int current = 0, int i = 0)
{
    if (i == n)
    {
        return current;
    }

    if (isFibonacci(current))
    {
        return findNthNonFibonacci(n, current + 1, i);
    }
    else
    {
        return findNthNonFibonacci(n, current + 1, i + 1);
    }
}

int main()
{
    int n;

    cout << "Enter the value of N to find the Nth non-Fibonacci number: ";
    cin >> n;

    int nthNonFibonacci = findNthNonFibonacci(n);

    cout << "The " << n << "th non-Fibonacci number is: " << nthNonFibonacci << endl;

    return 0;
}
