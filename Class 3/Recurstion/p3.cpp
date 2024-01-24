//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\

/*Calculate the sum of digits of a given number n*/

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    else
    {
        int lastDigit = n % 10;
        n = n / 10;
        return lastDigit + sumOfDigits(n);
    }
}
int main()
{
    int n;
    cin >> n;
    int result = sumOfDigits(n);
    cout << result << endl;
    return 0;
}
