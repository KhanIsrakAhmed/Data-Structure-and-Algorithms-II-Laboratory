//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct Item
{
    string name;
    int price;
};

bool compare(Item a, Item b)
{

    if (a.price > b.price)
        return true;
    else
        return false;
}

int greedy(vector<Item> &items, int n, int budget)
{

    sort(items.begin(), items.end(), compare);

    int maxValue = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (items[i].price < minPrice && budget > 0)
        {
            cout << items[i].name << " ";
            maxValue += items[i].price;
            minPrice = items[i].price;
            budget--;
        }
    }
    cout << endl;

    return maxValue;
}

int main()
{
    int n, budget;
    cin >> n >> budget;

    vector<Item> items(n);
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].name;
        cin >> items[i].price;
    }

    int result = greedy(items, n, budget);

    cout << result << endl;

    return 0;
}
