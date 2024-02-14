//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int taskTakeTimes(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return taskTakeTimes(n - 1) + taskTakeTimes(n - 2);
}

int32_t main()
{
    int n;
    cin >> n;

    cout << taskTakeTimes(n) << endl;

    return 0;
}