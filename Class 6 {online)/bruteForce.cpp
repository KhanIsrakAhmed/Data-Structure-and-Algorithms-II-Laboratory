//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    29-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int> coins, int amount)
{
    if (amount == 0)
        return 0;

    int numberOfCoins = INT_MAX;

    for (int i = 0; i < coins.size(); i++)
    {
        int current = coins[i];
        if (current > amount)
        {
            continue;
        }
        else
        {
            int remaining = amount - current;
            int req = 1 + coinChange(coins, remaining);
            if (numberOfCoins > req)
            {
                numberOfCoins = req;
            }
        }
    }
    return numberOfCoins;
}
int main()
{
    vector<int> coins{50, 30, 10, 5, 2};
    int result = coinChange(coins, 157);
    cout << result << endl;
    return 0;
}
