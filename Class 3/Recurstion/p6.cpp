/*Calculate the nth term of a Fibonacci series*/
//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
int main()
{
    int n;
    cin >> n;
    int result = Fibonacci(n);
    cout << result << endl;
    return 0;
}
