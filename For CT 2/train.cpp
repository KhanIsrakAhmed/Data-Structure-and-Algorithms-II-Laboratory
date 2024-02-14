//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    30-11-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct Train
{
    string tname;
    int arrivalTime;
    int departureTime;
};

bool compare(Train a, Train b)
{
    if (a.departureTime < b.departureTime)
        return true;
    else
        return false;
}

int trainSelecton(vector<Train> trains)
{
    if (trains.size() == 0)
    {
        return 0;
    }
    sort(trains.begin(), trains.end(), compare);
    int cnt = 0;

    int availablity = trains[0].departureTime;
    for (int i = 0; i < trains.size(); i++)
    {
        Train curret = trains[i];
        if (curret.arrivalTime > availablity)
        {
            cout << trains[i].tname << " ";
            availablity = trains[i].departureTime;
            cnt++;
        }
    }
    cout << endl;
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<Train> trains(n);
    for (int i = 0; i < n; i++)
    {
        cin >> trains[i].tname;
        cin >> trains[i].arrivalTime;
        cin >> trains[i].departureTime;
    }

    int result = trainSelecton(trains);
    cout << result << endl;

    return 0;
}