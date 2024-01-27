//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    27-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct Building
{
    string name;
    int floors;
};

struct LongShortBuilding
{
    int longest;
    int shortest;
};

LongShortBuilding find(Building arr[], int left, int right)
{
    LongShortBuilding result;

    if (left == right) // / No building
    {
        result.longest = left;
        result.shortest = right;
        return result;
    }
    else if (right - left == 1) //// Base case 1
    {
        if (arr[left].floors > arr[right].floors)
        {
            result.longest = left;
            result.shortest = right;
        }
        else
        {
            result.longest = right;
            result.shortest = left;
        }
    }
    else
    {
        int mid = (left + right) / 2;

        LongShortBuilding leftSide = find(arr, left, mid);
        LongShortBuilding rightSide = find(arr, mid + 1, right);

        if (arr[leftSide.shortest].floors < arr[rightSide.shortest].floors)
        {
            result.shortest = leftSide.shortest;
        }
        else
        {
            result.shortest = rightSide.shortest;
        }

        if (arr[leftSide.longest].floors > arr[rightSide.longest].floors)
        {
            result.longest = leftSide.longest;
        }
        else
            result.longest = rightSide.longest;
    }

    return result;
}

int main()
{
    int numOfBuildings;
    cin >> numOfBuildings;

    Building buildings[numOfBuildings];

    for (int i = 0; i < numOfBuildings; ++i)
    {
        cin >> buildings[i].name;
        cin >> buildings[i].floors;
    }

    LongShortBuilding result = find(buildings, 0, numOfBuildings - 1);

    cout << "Longest: " << buildings[result.longest].name << endl;
    cout << "Shortest: " << buildings[result.shortest].name << endl;

    return 0;
}
/*
7
B1 6
B2 6
B3 10
B4 8
B5 4
B6 5
B7 3
*/