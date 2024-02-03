//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int findSum(string str)
{
    int sum = 0;

    if (str.length() > 0)
    {
        for (char ch : str) // for each character
        {
            if (isdigit(ch)) // cheaking ddigit or not
            {
                sum += ch - '0'; // Zero is substituting for finding ascii values os 0-9
            }
        }
        return sum;
    }

    else
        return 0; //

    // for (int i = 0; str[i] != '\0'; i++) // Stringcan be use a array
    // {
    //     if ((str[i] >= '0') && (str[i] <= '9')) // Checking for numeric characters.
    //     {
    //         sum += (str[i] - '0'); // Adding numeric characters.
    //     }
    // }
}
int main()
{
    string str;
    cout << "Enter --\t";
    cin >> str;
    cout << str << endl;
    cout << "Sum :" << findSum(str) << endl;
}
