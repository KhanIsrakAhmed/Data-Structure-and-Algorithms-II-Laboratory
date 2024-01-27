//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct Artifact
{
    string name;
    int weight;
    int value;
    int enchantment;
};

int maximizeTotalValue(vector<Artifact> artifacts, int capacity, int desiredEnchantment)
{
    auto cmp = [&](Artifact a, Artifact b)
    {
        double ratio_A = (double)a.value / a.weight;
        double ratio_B = (double)b.value / b.weight;
        return ratio_A > ratio_B;
    };
    sort(artifacts.begin(), artifacts.end(), cmp);

    int remainingCapacity = capacity;
    int totalValue = 0;

    for (auto a : artifacts)
    {
        if (a.weight <= remainingCapacity && a.enchantment >= desiredEnchantment)
        {
            totalValue += a.value;
            remainingCapacity -= a.weight;

            cout << a.name << " ";
        }
    }
    cout << endl;
    return totalValue;
}

int main()
{
    int numArtifacts;
    cin >> numArtifacts;

    int weightLimit;
    cin >> weightLimit;

    vector<Artifact> artifacts(numArtifacts);

    for (int i = 0; i < numArtifacts; ++i)
    {
        getchar();
        cin >> artifacts[i].name;
        cin >> artifacts[i].weight;
        cin >> artifacts[i].value;
        cin >> artifacts[i].enchantment;
    }

    int desiredEnchantment;
    cin >> desiredEnchantment;

    int result = maximizeTotalValue(artifacts, weightLimit, desiredEnchantment);

    cout << "Total Value with enchantment  " << result << endl;

    return 0;
}
/*
6
20
A1 8 15 3
A2 6 20 2
A3 10 25 4
A4 5 10 -1
A5 12 30 5
A6 7 18 -3
3
*/