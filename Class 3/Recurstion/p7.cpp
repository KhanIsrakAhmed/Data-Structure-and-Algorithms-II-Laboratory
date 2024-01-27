/*Calculate a to the power b*/
//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
    {
        int f = power(a, b - 1);
        int result = a * f;
        return result;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int result = power(a, abs(b));
    if (b < 0)
    {
        cout << (1.0 / result) << endl;
    }
    else
    {
        cout << result << endl;

        return 0;
    }
}
