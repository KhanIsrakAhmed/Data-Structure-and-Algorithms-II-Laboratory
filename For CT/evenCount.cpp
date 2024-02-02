//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int count_even_digits(int identification_number)
{
    if (identification_number == 0)
    {
        return 0;
    }
    else if (identification_number % 2 == 0)
    {
        return 1 + count_even_digits(identification_number / 10);
    }
    else
    {
        return count_even_digits(identification_number / 10);
    }
}

int main()
{
    int identification_number;

    cout << "Enter an identification number: ";
    cin >> identification_number;

    int count_even_digits_result = count_even_digits(identification_number);

    cout << "The number of even digits in the identification number is: " << count_even_digits_result << endl;

    return 0;
}