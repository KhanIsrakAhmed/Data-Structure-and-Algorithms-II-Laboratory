//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    17-10-2023     *************************\

/*Program to Generate Fibonacci Sequence Up to a Certain Number*/

#include <bits/stdc++.h>
using namespace std;

// Function to generate the nth Fibonacci number using recursion
int fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter a number to generate the Fibonacci sequence up to: ";
    cin >> n;

    cout << "Fibonacci Sequence up to " << n << ": ";

    int i = 0;
    while (fibonacci(i) <= n)
    {
        cout << fibonacci(i) << " ";

        // if (fibonacci(i + 1) <= n)
        // {
        //     cout << ", ";
        // }
        fibonacci(i + 1);

        i++;
    }

    return 0;
}
