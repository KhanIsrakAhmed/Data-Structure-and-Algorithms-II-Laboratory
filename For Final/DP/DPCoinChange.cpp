//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-12-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

int dpTable[500];

int coinChange_DP(vector<int> coins, int amount)
{
    auto cmp = [&](int a, int b)
    {
        return a > b;
    };
    sort(coins.begin(), coins.end(), cmp);

    memset(dpTable, -1, sizeof(dpTable));

    if (amount == 0)
        return 0;
    else if (dpTable[amount] != -1)
        return dpTable[amount];

    int minCoins = -1;
    int currentCoin = -1;
    int howManyOfCurrentCoin = 0;
    int remainAmount = amount;

    for (auto i : coins)
    {

        if (i > amount)
        {
            continue;
        }
        else
        {
            int remainAmount = amount - i;
            int friend_ = coinChange_DP(coins, remainAmount);
            int totalAns = friend_ + 1;

            if (minCoins == -1)
            {
                minCoins = totalAns;
                currentCoin = i;
                howManyOfCurrentCoin = remainAmount / currentCoin;
            }
            else if (totalAns < minCoins)
            {
                minCoins = friend_ + 1;
                currentCoin = i;
            }
        }
        }

    dpTable[amount] = minCoins;
    return minCoins;
}

int main()
{
    int totalCoins;
    cout << "Enter number of Coina" << endl;
    cin >> totalCoins;

    vector<int> coins;
    cout << "Enter coins" << endl;

    for (auto i = 0; i < totalCoins; i++)
    {
        int c = 0;
        cin >> c;
        coins.push_back(c);
    }
    cout << "Enter amount to create: ";
    int amount;
    cin >> amount;

    int res = coinChange_DP(coins, amount);
    cout << endl
         << endl
         << "Optimaize coin can be taken " << res << endl;

    return 0;
}

/* Enter number of Coina
3
Enter coins
25 5 1
Enter amount to create: 30
Optimaize coin can be taken like 2*/