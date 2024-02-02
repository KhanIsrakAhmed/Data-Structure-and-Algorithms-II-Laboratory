//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int left, int right)
{
    if (left >= right)
        return true;
    else
    {
        if (str[left] == str[right])
        {
            bool friend_ = isPalindrome(str, left + 1, right - 1);
            return friend_;
        }
        else
            return false;
    }
}

string remove_And_Conversion(string str, int index)
{
    if (index == str.size())
        return "";

    else
    {
        char ele = str[index];
        string pass = remove_And_Conversion(str, index + 1);
        if (ele >= 'A' && ele <= 'Z')
        {
            ele = ele - 'A';
            ele = ele + 'a';
        }
        if (ele == ' ')
        {
            return ele + pass;
        }
        else

            return pass;
    }
}

int main()
{
    string passphrase;

    cout << "Enter a passphrase: ";
    cin >> passphrase;

    // Remove all white spaces from the passphrase and convert all upper case characters to lower case characters.
    string modifiedPassphrase = remove_And_Conversion(passphrase, 0);

    // Call the `isPalindrome()` function with the modified passphrase as the argument.
    bool isPalindromeResult = isPalindrome(modifiedPassphrase, 0, modifiedPassphrase.size() - 1);

    // If the `isPalindrome()` function returns `true`, then the passphrase is a valid palindrome. Otherwise, the passphrase is not a valid palindrome.
    if (isPalindromeResult)
    {
        cout << "The passphrase is a valid palindrome." << endl;
    }
    else
    {
        cout << "The passphrase is not a valid palindrome." << endl;
    }

    return 0;
}