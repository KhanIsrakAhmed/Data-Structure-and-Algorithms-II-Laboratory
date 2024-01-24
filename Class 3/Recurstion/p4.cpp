/*Calculate the factorialorial of n*/
//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        int x = factorial(n - 1);
        int fact = 0;
        fact = n * factorial(n - 1);
        return fact;
    }
}
int main()
{
    cout << "Enter the value of N" << endl;
    int n;
    cin >> n;
    int s = factorial(n);
    cout << s << endl;
    return 0;
}
