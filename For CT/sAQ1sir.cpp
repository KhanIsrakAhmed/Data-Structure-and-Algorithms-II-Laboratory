//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;
int sumOfDigit(int idx, string str)
{
    if (idx == str.length())
        return 0;
    else
    {
        char currentCharacter = str[idx];
        int friend_ = sumOfDigit(idx + 1, str);
        if (currentCharacter >= '0' && currentCharacter <= '9')
        {
            return friend_ + (currentCharacter - '0');
        }
        else
            return friend_;
    }
}
int main()
{
    string str;
    cin >> str;
    cout << sumOfDigit(0, str) << endl;
    return 0;
}