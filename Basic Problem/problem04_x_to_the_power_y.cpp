//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-09-2023     *************************\

/** calculates x^y using divide and conquer */
#include <bits/stdc++.h>
using namespace std;

long long power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        int mid = y / 2;
        long long p = power(x, mid);
        if (y % 2 == 0)
        { // power even
            return p * p;
        }
        else
        {
            return p * p * x;
        }
    }
}

int main()
{
    int X, Y;
    cin >> X >> Y;
    cout << power(X, Y);
}
