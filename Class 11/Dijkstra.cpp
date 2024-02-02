//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    18-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
struct Edge
{
    int v;
    int w;
};

struct Ndistance
{
    int node;
    int distance;
};

const int INF = 0x7F7F7F7F;

void pathPrint(int currentNode, int parent[])
{
    if (parent[currentNode] == currentNode)
    {
        cout << currentNode << " ";
    }
    else
    {
        pathPrint(parent[currentNode], parent);
        cout << currentNode << " ";
    }
}

void Dijkstra(vector<Edge> Graph[], int V, int source)
{
    int distance[V];
    for (int i = 0; i < V; i++)
        distance[i] = INF;

    int parent[V];
    for (int i = 0; i < V; i++)
        parent[i] = i;

    auto compare = [&](Ndistance a, Ndistance b)
    {
        if (a.distance <= b.distance)
            return false;
        else
            return true;
    };

    distance[source] = 0;
    priority_queue<Ndistance, vector<Ndistance>, decltype(compare)> PQ(compare);

    PQ.push({source, distance[source]});

    while (PQ.empty() == false)
    {
        Ndistance temp = PQ.top();
        int currentNode = temp.node;
        PQ.pop();

        for (Edge neighbor : Graph[currentNode])
        {
            if (distance[neighbor.v] > distance[currentNode] + neighbor.w)
            {
                distance[neighbor.v] = distance[currentNode] + neighbor.w;
                PQ.push({neighbor.v, distance[neighbor.v]});
                parent[neighbor.v] = currentNode;
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        cout << i << " : ";
        cout << distance[i] << " @";
        pathPrint(i, parent);
        cout << endl;
    }
    cout << endl;
}
int main()
{
    freopen("input.txt", "r", stdin);

    int V, E;
    cin >> V >> E;

    vector<Edge> Graph[V];

    for (int i = 0; i < E; i++)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        Graph[from].push_back({to, cost});
    }
    int source;
    cin >> source;
    Dijkstra(Graph, V, source);

    return 0;
}