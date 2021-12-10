#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
    int u;
    int v;
    int wt;
    node(int first, int second,int weight)
    {
        u = first;
        v = second;
        wt = weight;
    }
};
bool comp(node a , node b){
    return a.wt < b.wt;
}
int find_set(int v,vector<int> &parent)
{
if(v==parent[v])
 return v;
return find_set(parent[v],parent);
}
void union_set(int a, int b,vector<int> &parent, vector<int> &size)
{
a = find_set(a,parent);
b = find_set(b,parent);

if(size[a] < size[b]){
parent[a] = b;
size[b] += size[a];
}
else{
    parent[b] = a;
    size[a]+=size[b];
}
}

int main()
{
int n,e;
cin>>n>>e;
vector<int> parent(n);
vector<int> size(n);
vector<node >graph;
for(int i=0;i<e;i++)
{
int u,v,w;
cin>>u>>v>>w;
graph.push_back({u,v,w});
}
sort(graph.begin(), graph.end(),comp);
for(int i=0;i<n;i++)
  {
      parent[i]=i;
      size[i] = 0;
  }
int total_weight = 0;
for(auto i: graph){
int x = find_set(i.v,parent);
int y = find_set(i.u,parent);
cout<<x<<" "<<y<<" ";
if(x != y){
total_weight += i.wt;
union_set(i.u,i.v,parent,size);//add to set
}
}
cout<<"Minimum Spanning Weight is: "<<total_weight;
}
