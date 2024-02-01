//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-12-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

/** Disjoint Set Union - Start **/
int parent[107];
int rank_[107];

void makeSet(int x)
{
    parent[x] = x;
    rank_[x] = 0;
}
int findSet(int x)
{
    if (parent[x] == x)
        return x;
    else
    {
        int friend_ = findSet(parent[x]);
        parent[x] = friend_;
        return friend_;
    }
}

bool Union(int u, int v)
{
    int Ru = findSet(u);
    int Rv = findSet(v);

    if (Ru == Rv)
        return false;
    else
    {
        if (rank_[Ru] > rank_[Rv])
        {
            parent[Rv] = Ru;
        }
        else if (rank_[Rv] > rank_[Ru])
        {
            parent[Ru] = Rv;
        }
        else
        {
            parent[Rv] = Ru;
            rank_[Ru]++;
        }
        return true;
    }
}
int main()
{
    return 0;
}