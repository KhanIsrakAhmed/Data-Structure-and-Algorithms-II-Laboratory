//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    01-10-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int main()
{
    char n;

    cout << "Enter" << endl;
    while (true)

    {
        cin >> n;
        if (n != 'A' && n != 'a')
        {
            cout << n << endl;
        }
        else
        {
            cout << "Find A or a " << endl;
            break;
        }
    }

    return 0;
}