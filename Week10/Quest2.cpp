#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin>>n;
    int p[n],d[n];
    for(int i =0;i<n;i++)
      cin>>p[i];
    for(int i =0;i<n;i++)
      cin>>d[i];
    vector<pair<int,int> >jobs;
    int profit, deadline;
    for(int i =0;i<n;i++)
    {
        jobs.push_back(make_pair(p[i],d[i]));
    }
    sort(jobs.begin(),jobs.end(),compare);
    int maxendtime =0;
    for(int i =0;i<n;i++)
    {
        if(jobs[i].second > maxendtime)
          maxendtime = jobs[i].second;
    }
    vector<pair<int,int> > ans;
    int count =0,s=0;
    for(int i =0;i<n;i++)
    {
        int j = jobs[i].second;
        int k = jobs[i].first;
        while(j>s+k)j--;
        if(j==s+k&&s<maxendtime)
        {
            count++;
            ans.push_back(make_pair(jobs[i].first,jobs[i].second));
            s= j;
        } 
    }
    cout<<"Maximum no of tasks: "<<count<<endl;
    cout<<"List of tasks selected ";
    for(int i =0;i<ans.size();i++)
    {
        cout<<"Process time "<< ans[i].first<<" Deadline "<<ans[i].second<<endl;
    }
}