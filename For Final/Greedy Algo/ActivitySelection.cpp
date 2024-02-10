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
int activitySelection(vector<Activity> activities)
{
    if (activities.size() == 0)
        return 0;
    sort(activities.begin(), activities.end(), compare);
    int pick = 1;
    int freeTime = activities[0].finishTime;
    cout << activities[0].taskID << " ";
    for (int i = 1; i < activities.size(); i++)
    {
        Activity currentActivity = activities[i];
        if (currentActivity.startTime >= freeTime)
        {
            cout << activities[i].taskID << " ";
            pick++;
            freeTime = currentActivity.finishTime;
        }
    }
    cout << endl;
    return pick;
}
int main()
{
    int n;
    cin >> n;
    vector<Activity> activities(n);
    for (int i = 0; i < n; i++)
    {
        getchar();
        cin >> activities[i].taskID;
        cin >> activities[i].startTime >> activities[i].finishTime;
    }
    int result = activitySelection(activities);
    cout << result << endl;
    return 0;
}

/*

4
t1 2 4
t2 2 5
r3 5 6
t4 7 9

*/