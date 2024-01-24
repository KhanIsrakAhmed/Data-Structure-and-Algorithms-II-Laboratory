//        ****************  Author :  Khan Israk Ahmed  *************************\\
//        ****************  Date:    01-10-2023     *************************\\


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Numbers :\t";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int currentElement = arr[i];
        bool previouslyFound = false;

        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] == currentElement)
            {
                previouslyFound = true;
                break;
            }
        }

        if (previouslyFound == false)
        {
            int counter = 0;
            for (int j = i; j < n; j++)
            {
                if (arr[j] == currentElement)
                    counter++;
            }
            cout << currentElement << " occurs " << counter << " times\n";
        }
    }
    cout << "\n";

    return 0;
}