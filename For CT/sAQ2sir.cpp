//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;
bool isPrime(int i, int n)
{
    if (i * i > n)
        return true;
    else
    {
        if (n % i == 0)
            return false;
        else
        {
            bool friend_ = isPrime(i + 1, n);
            return friend_;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int checkPrime = (temp - 1) / 2;
        if (checkPrime >= 2 && isPrime(2, checkPrime))
        {
            cout << temp << " ";
            sum += temp;
        }
    }
    cout << endl;
    cout << sum << endl;
}
