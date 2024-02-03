//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

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

int good_numbers(vector<int> list)
{
    int sum = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if (isPrime((list[i] - 1) / 2))
        {
            sum += list[i];
        }
    }
    return sum;
}

int main()
{
    vector<int> list;
    int size;
    cout << "Enter the size of the list: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        list.push_back(element);
    }

    int sum_of_good_numbers = good_numbers(list);

    cout << "The sum of the Good Numbers in the list is: " << sum_of_good_numbers << endl;

    return 0;
}