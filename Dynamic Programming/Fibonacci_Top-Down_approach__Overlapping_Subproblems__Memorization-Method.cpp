//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
int dpTable[N];

int fib(int n)
{
    if (dpTable[n] > -1)
        return dpTable[n];
    else if (n == 2)
        return 1;
    else if (n == 1)
        return 0;
    else
    {
        int friend1 = fib(n - 1);
        int friend2 = fib(n - 2);
        dpTable[n] = friend1 + friend2;
        return dpTable[n];
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < N; i++)
        dpTable[i] = -1;

    int num = fib(n);
    cout << "\nFibonacci series " << n << "th element is: " << num << "\n\n";

    return 0;
}
