//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

bool compare(vector<float> a, vector<float> b)
{
    return a[a.size() - 2] < b[b.size() - 2];
}

void solution()
{
    int numRows, numColumns;
    cin >> numRows >> numColumns;

    vector<vector<float>> matrix;
    int rowMax = INT_MIN;

    for (int i = 0; i < numColumns; i++)
    {
        vector<float> temp;
        for (int j = 0; j < numRows; j++)
        {
            int a;
            cin >> a;
            temp.push_back(a);
            if (j != numRows - 1)
                rowMax = max(a, rowMax);
        }
        temp.push_back((temp.back() * 1.0) / rowMax);
        temp.push_back(i);
        matrix.push_back(temp);
    }

    sort(matrix.begin(), matrix.end(), compare);

    int arr[numRows] = {0};
    int count = 0;

    for (auto i : matrix)
    {
        rowMax = INT_MIN;
        for (int j = 0; j < numRows; j++)
        {
            arr[j] += i[j];
            if (arr[j] > rowMax && j != numRows - 1)
                rowMax = arr[j];
        }
        if (arr[numRows - 1] > rowMax)
            break;
        count++;
    }

    cout << numColumns - count << '\n';

    for (auto i : matrix)
    {
        count--;
        if (count < 0)
            cout << i[numRows + 1] + 1 << " ";
    }

    cout << '\n';
}

int main()
{
    int t = 1;
    int c = 1;

    while (t--)
    {
        solution();
    }

    return 0;
}
