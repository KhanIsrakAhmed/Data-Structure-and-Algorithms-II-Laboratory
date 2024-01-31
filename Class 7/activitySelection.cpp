//        ****************  Author :  Khan Israk Ahmed  *************************\\
//        ****************  Date:    29-11-2023     *************************\\


#include <bits/stdc++.h>
using namespace std;
struct Activity
{
    string taskID;
    int startTime;
    int finishTime;
};

bool compare(Activity a, Activity b)
{
    if (a.finishTime < b.finishTime)
        return true;
    else
        return false;
}
int activitSelections(vector<Activity> activites)
{
    if (activites.size() == 0)
        return 0;

    sort(activites.begin(), activites.end(), compare);
    int picked = 1;
    int availableTime = activites[0].finishTime;
    cout << activites[0].taskID << " ";
    for (int i = 0; i < activites.size(); i++)
    {
        Activity current = activites[i];
        if (current.startTime >= availableTime)
        {
            cout << activites[i].taskID << " ";
            picked++;
            availableTime = current.finishTime;
        }
    }
    cout << endl;
    return picked;
}

int main()
{
    int n;
    cin >> n;
    vector<Activity> activites(n);
    for (int i = 0; i < n; i++)
        return 0;
}