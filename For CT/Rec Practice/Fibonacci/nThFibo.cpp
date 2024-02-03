//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    17-10-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n < 0)
    {
        throw invalid_argument("n must be a non-negative integer");
    }
    else if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    cout << "The nth Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}