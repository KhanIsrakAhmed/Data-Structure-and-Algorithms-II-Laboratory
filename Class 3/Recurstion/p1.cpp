//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\

/*Prints the numbers from 1 to n*/

#include <bits/stdc++.h>
using namespace std;
void req(int i, int n)
{
    if (i > n)
        return;
    else
    {
        cout << i << "\t";
        req(i + 1, n);
    }
}
int main()
{
    cout << "Enter the value of N" << endl;
    int n;
    cin >> n;
    req(1, n);
    return 0;
}
