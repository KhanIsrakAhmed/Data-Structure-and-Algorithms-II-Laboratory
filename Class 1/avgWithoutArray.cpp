//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    01-10-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Numbers :\t";
    cin >> n;
    float avg;
    int sum = 0, Value;
    cout << "Enter the Values " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Value;
        sum += Value;
    }

    cout << "Average of the Numbers" << endl;
    avg = (float)sum / n;
    cout << avg << endl;

    return 0;
}