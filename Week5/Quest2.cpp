#include<iostream>
#include<algorithm>
using namespace std;
void findsum(int arr[], int n, int sum)
{
    int l = 0, r =  n-1;
    bool flag = false;
    while(l<r)
    {
        if(arr[l]+arr[r]<sum)
           l++;
        if(arr[l]+arr[r]>sum)
           r--;
        if(arr[l]+arr[r]==sum)
        {
            flag = true;
            cout<<arr[l]<<" "<<arr[r]<<" ";
            r--;
        }
    }
    if(flag == false)
      cout<<"No such pairs exist"<<endl;
    
}
int main()
{
    int t; 
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i =0; i<n;i++)
           cin>>arr[i];
        int sum;
        cin>>sum;
        sort(arr,arr+n);
        findsum(arr,n,sum);
        t--;
    }
}