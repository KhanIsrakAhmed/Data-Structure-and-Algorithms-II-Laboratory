//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;

long long dpTable[N];

int main()
{
    int n;
    cin >> n;

    dpTable[1] = 0;
    dpTable[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dpTable[i] = dpTable[i - 1] + dpTable[i - 2];
    }

    cout << "\nFibonacci series " << n << "th element is: " << dpTable[n] << "\n\n";

    return 0;
}
