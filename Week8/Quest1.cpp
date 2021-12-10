#include<iostream>
#include<vector>
#include<limits.h>
#include<queue>
using namespace std;
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    vector<pair<int,int> >graph[nodes];
    int source,destination,weight;
    for(int i =0;i<edges;i++)
    {
        cin>>source>>destination>>weight;
        graph[source].push_back(make_pair(destination,weight));
        graph[destination].push_back(make_pair(source,weight));
    }
    int key[nodes];
    int parent[nodes];
    bool mst[nodes];
    for(int i =0;i<nodes;i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    key[0] =0;
    parent[0] =-1;
    pq.push({0,0});
    for(int i =0;i<nodes-1;i++)
    {
        int u =pq.top().second;
        pq.pop();
        mst[u] = true;
        for(auto it:graph[i])
        {
            int dest = it.first;
            int wt = it.second;
            if(mst[dest] == false &&wt<key[dest])
            {
                parent[dest] = u;
                key[dest] =wt;
                pq.push({key[dest],dest});
            }

        }
    }
    int mstwt =0;
    for(int i =0;i<nodes;i++)
      {
          mstwt+= key[i];
          cout<<parent[i]<<" "<<i<<" ";
      }
      cout<<"\n"<<mstwt;



}