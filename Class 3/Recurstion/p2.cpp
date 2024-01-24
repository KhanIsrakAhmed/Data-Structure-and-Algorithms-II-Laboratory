//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\

/*Prints the numbers from 1 to n*/

#include <bits/stdc++.h>
using namespace std;

int sumOfN(int n)
{
    if (n == 0)
        return 0;
    else
    {
        int x = sumOfN(n - 1);
        int sum = 0;
        sum = n + sumOfN(n - 1);
        return sum;
    }
}
int main()
{
    cout << "Enter the value of N" << endl;
    int n;
    cin >> n;
    int s = sumOfN(n);
    cout << s << endl;
    return 0;
}
