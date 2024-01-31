//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    29-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct Product
{
    string ID;
    int weight, value;
};

bool compare(Product a, Product b)
{
    double aRatio = a.value / (double)a.weight;
    double bRatio = b.value / (double)b.weight;
    if (aRatio >= bRatio)
        return true;
    else
        return false;
}

int knapsack01gready(vector<Product> products, int n, int capacity)
{
    sort(products.begin(), products.end(), compare);
    int remaining = capacity;
    double profit = 0;
    for (Product &p : products)
    {
        if (p.weight <= remaining)
        {
            cout << p.ID << " ";
            profit += p.value;
            remaining -= p.weight;
        }
    }
    cout << endl;
    return profit;
}
double knapsackFractionalgready(vector<Product> products, int n, int capacity)
{
    sort(products.begin(), products.end(), compare);
    int remaining = capacity;
    double profit = 0;
    for (Product &p : products)
    {
        if (p.weight <= remaining)
        {
            cout << p.ID << " ";
            profit += p.value;
            remaining -= p.weight;
        }
        else
        {
            double vBywRatio = p.value / (double)p.weight;
            profit += vBywRatio * (double)remaining;
            remaining = 0;
            break;
        }
    }
    cout << endl;
    return profit;
}

int knapsacko1Native(vector<Product> products, int it, int remaining)
{
    if (remaining == 0 || it == products.size())
        return 0;
    Product current = products[it];

    if (current.weight <= remaining)
    {
        int friend_ = knapsacko1Native(products, it + 1, remaining);
        return friend_;
    }
    else
    {
    }
}

int main()
{
    int n;
    cin >> n;
    vector<Product> products(n);
    for (Product &p : products)
    {
        getchar();
        cin >> p.ID;
        cin >> p.weight;
        cin >> p.value;
    }
    int capacity;
    cin >> capacity;
    cout << "-----------------------------------------------------------------" << endl;

    cout << "Knapsack with 01 greedy algorithm" << endl;

    double result = knapsack01gready(products, n, capacity);
    cout << result << endl;

    cout << "-----------------------------------------------------------------" << endl;
    cout << "Knapsack with fractional greedy algorithm" << endl;

    result = knapsackFractionalgready(products, n, capacity);
    cout << result << endl;
    return 0;
}