//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num, int div = 2);

int goodNumber(int n)
{
    int gn = 0;

    if (isPrime(n))
    {
        gn = (2 * n) + 1;
        cout << n << " is Prime " << endl;
    }

    return gn; // Return gn
}

bool isPrime(int num, int div = 2)
{
    if (num <= 1)
    {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (div * div > num)
    {
        return true; // If no divisors are found, the number is prime
    }
    if (num % div == 0)
    {
        return false; // If num is divisible by div, it's not prime
    }
    return isPrime(num, div + 1); // Check the next divisor
}

int main()
{
    int n;
    cout << "Enter --\t";
    cin >> n;

    int result = goodNumber(n);

    if (result != 0) // Check if result is non-zero
    {
        cout << "Good Number: " << result << endl;
    }
    else
    {
        cout << "Not a Good Number" << endl;
    }

    return 0;
}
