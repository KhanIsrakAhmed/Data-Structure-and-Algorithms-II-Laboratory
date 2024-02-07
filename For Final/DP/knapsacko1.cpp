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

int KnapSack(vector<Product> product, int cap)
{

    sort(product.begin(), product.end(), cmp);
    int n = product.size();
    int dp[n + 1][cap + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= cap; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (product[i - 1].w <= j)
            {
                dp[i][j] = max(product[i - 1].val + dp[i - 1][j - product[i - 1].w], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][cap];
}

int main()
{

    freopen("input.txt", "r", stdin);
    int n, cap;

    cin >> n >> cap;

    vector<Product> products(n);
    for (int i = 0; i < n; i++)
    {
        cin >> products[i].name;
        cin >> products[i].w;
        cin >> products[i].val;
    }
    cout << "Maximum Profit: " << KnapSack(products, cap) << endl;
    return 0;
}