//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    29-11-2023     *************************\

/*Coin Change (minimum number of coins)*/

#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    if (a > b)
        return true;
    else
        return false;
}
void printVector(vector<int> coins)
{
    for (int x : coins)
    {
        cout << x << " ";
    }
    cout << endl;
}

int coinChange(vector<int> coins, int amount)
{
    sort(coins.begin(), coins.end(), compare);

    int remaining = amount;
    int minimumNumberOfCoins = 0;

    for (int i = 0; i < coins.size(); i++)
    {
        int current = coins[i];
        int moreNeeded = remaining / current;

        remaining = remaining % current;
        minimumNumberOfCoins = minimumNumberOfCoins + moreNeeded;
        cout << current << " -> " << moreNeeded << endl;
    }

    return minimumNumberOfCoins;
}
int main()
{
    vector<int> coins{5, 2, 1, 20, 50};

    int result = coinChange(coins, 157);

    cout << result << endl;
    return 0;
}