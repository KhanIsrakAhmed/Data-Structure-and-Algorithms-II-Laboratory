//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;
int countt = 0;

string password(int n, int cnt)
{
    if (n == 0)
    {
        return "";
    }
    else
    {
        int lastDigit = n % 10;
        if (lastDigit % 2 == 0) // even
        {
            cnt++;
            countt++;
            return to_string(lastDigit) + password(n / 10, 0);
        }
        else
        {
            return password(n / 10, 0);
        }
    }
}

int32_t main()
{
    int n;
    cin >> n;

    string s = password(n, 0);
    for (int i = s.length(); i >= 0; i--)
    {
        cout << s[i];
    }
    cout << "#" << countt << endl;
    return 0;
}