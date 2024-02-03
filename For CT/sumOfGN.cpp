//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int good_numbers(int list[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (is_prime((list[i] - 1) / 2))
        {
            sum += list[i];
        }
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of the list: ";
    cin >> size;

    int list[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> list[i];
    }

    int sum_of_good_numbers = good_numbers(list, size);

    cout << "The sum of the Good Numbers in the list is: " << sum_of_good_numbers << endl;

    return 0;
}