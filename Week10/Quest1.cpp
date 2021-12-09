#include<iostream>
#include<vector>
using namespace std;
void printmaxActivities(int s[],int f[],int n)
{
    vector<int> ans;
    int i,j;
    int c=1;
    i=1;
    ans.push_back(i);
    for(j =1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            ans.push_back(j+1);
            c++;
            i = j;
        }
    }
    cout<<"\nThe number of non-conflicting activites: "<<c<<endl;
    cout<<"The activities are: ";
    for(i=0;i<ans.size();i++)
       cout<<ans[i]<<" ";
}
int main()
{
 int n;
 cin>>n;
 int s[n],f[n];
 for(int i =0;i<n;i++)
    cin>>s[i];
 for(int i =0;i<n;i++)
    cin>>f[i];
 printmaxActivities(s,f,n);   
}