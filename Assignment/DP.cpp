//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    27-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

void printSubset(const bool subset[][1001], int n, int sum, int set[])
{
    cout << "Subsets with the given sum: ";
    for (int i = 0; i <= n; i++)
    {
        if (subset[i][sum])
        {
            cout << "( ";
            int currentSum = sum;
            for (int j = i; j > 0 && currentSum > 0; j--)
            {
                if (!subset[j - 1][currentSum])
                {
                    cout << set[j - 1] << " ";
                    currentSum -= set[j - 1];
                }
            }
            cout << ") ";
        }
    }
    cout << endl;
}

bool subsetSum(int set[], int n, int sum)
{
    bool subset[n + 1][1001];

    for (int i = 0; i <= n; i++)
    {
        subset[i][0] = true;
    }

    for (int i = 1; i <= sum; i++)
    {
        subset[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < set[i - 1])
            {
                subset[i][j] = subset[i - 1][j];
            }
            if (j >= set[i - 1])
            {
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
            }
        }
    }

    if (subset[n][sum])
    {
        printSubset(subset, n, sum, set);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    int set[n];
    for (int i = 0; i < n; i++)
    {
        cin >> set[i];
    }

    int sum;
    cin >> sum;

    if (subsetSum(set, n, sum) == false)
    {
        cout << "No subset with the given sum";
    }

    return 0;
}

/*
6
2 5 15 8 4 3
9
*/