//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

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
    int remainingAmount = amount;
    int minimumNumberOfCoins = 0;
    for (int i = 0; i < coins.size(); i++)
    {
        int currentCoin = coins[i];
        int howManyOfCurrentCoin = remainingAmount / currentCoin;
        remainingAmount = remainingAmount % currentCoin;
        minimumNumberOfCoins = minimumNumberOfCoins + howManyOfCurrentCoin;
        cout << currentCoin << " -> " << howManyOfCurrentCoin << endl;
    }
    return minimumNumberOfCoins;
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
    int result = coinChange(coins, amount);
    cout << result << endl;
    return 0;
}