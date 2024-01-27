/*  Remove white spaces from a string & convert upper cases to lower */
//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

string remove_And_Conversion(string str, int index)
{
    if (index == str.size())
        return "";

    else
    {
        char ele = str[index];
        string pass = remove_And_Conversion(str, index + 1); // Friend Works//
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
    string str;
    getline(cin, str);
    string str2 = remove_And_Conversion(str, 0);
    cout << str2 << endl;
    return 0;
}
