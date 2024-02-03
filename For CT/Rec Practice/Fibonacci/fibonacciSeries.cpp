//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    17-10-2023     *************************\

/*Fibonacci Series up to n number of terms*/

#include <bits/stdc++.h>
using namespace std;

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

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; ++i)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
