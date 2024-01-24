/*Count the number of digits of a given number n*/

//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    if (n == 0)
        return 0;
    else
    {
        n = n / 10;
        return 1 + countDigits(n);
    }
}
int main()
{
    int n;
    cin >> n;
    int result = countDigits(n);
    cout << result << endl;
    return 0;
}
