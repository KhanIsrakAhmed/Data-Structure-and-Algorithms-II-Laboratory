//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct Product
{
    string name;
    int w;
    int val;
};

int cmp(Product a, Product b)
{
    double ratio_A = (double)a.val / a.w;
    double ratio_B = (double)b.val / b.w;
    if (ratio_A > ratio_B)
        return true;
    else
        return false;
}

int Knapsack(vector<Product> products, int cap)
{
    sort(products.begin(), products.end(), cmp);
    int maxval = 0;
    for (auto P : products)
    {
        if (P.w <= cap)
        {
            maxval += P.val;
            cap -= P.w;
            cout << P.name << " ";
        }
    }

    cout << endl;
    return maxval;
}
double KnapsackFractionGreedy(vector<Product> products, int capacity)
{
    sort(products.begin(), products.end(), cmp);

    int remainingCapacity = capacity;
    double profit = 0;

    for (auto p : products)
    {
        if (p.w <= remainingCapacity)
        {
            profit += p.val;
            remainingCapacity -= p.w;
            cout << p.name << " ";
        }
        else
        {
            double perKgval = p.val / (double)p.w;
            profit = profit + (perKgval * remainingCapacity);
            cout << p.name << " ";
            remainingCapacity = 0;
            break;
        }
    }
    cout << endl;
    return profit;
}

int main()
{
    freopen("input.txt", "r", stdin);
    int n, cap;
    cin >> n >> cap;

    vector<Product> products(n);
    for (int i = 0; i < n; i++)
    {
        getchar();
        cin >> products[i].name;
        cin >> products[i].w;
        cin >> products[i].val;
    }
    int result_1 = Knapsack(products, cap);
    cout << "Max Profit grain in Greedy = " << result_1 << endl;

    double result_2 = KnapsackFractionGreedy(products, cap);
    cout << "Max Profit grain in Fractional = " << result_2 << endl;
    return 0;
}