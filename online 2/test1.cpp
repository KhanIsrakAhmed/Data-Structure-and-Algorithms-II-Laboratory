//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    01-12-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

struct Job
{

    int s_i;
    int ds_i;
    int f_i;
    int amount;
};

bool compare(Job a, Job b)
{
    if (a.amount > b.amount)
        return true;

    else
        return false;
}

int jobSelect(vector<Job> jobs, int n)
{
    sort(jobs.begin(), jobs.end(), compare);

    int availablity = jobs[0].f_i;

    int taken = 0;
    int earning = 0;

    for (int i = 0; i < n; i++)
    {
        if (jobs[i].f_i > availablity)
        {
            taken++;
            availablity = jobs[i].f_i;
            earning += jobs[i].amount;
            cout << " Start Time " << jobs[i].s_i << endl;

            cout << " Finish time" << jobs[i].f_i << endl;

            cout << "defc level" << jobs[i].ds_i << endl;
        }
        cout << endl;
    }

    cout << "Total earning  " << earning << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<Job> jobs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> jobs[i].s_i;
        cin >> jobs[i].f_i;
        cin >> jobs[i].ds_i;
        cin >> jobs[i].amount;
    }
    int result = jobSelect(jobs, n);

    cout << result << endl;
    return 0;
}