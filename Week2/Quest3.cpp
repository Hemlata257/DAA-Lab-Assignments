#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr, int n, int key)
{
    int count =0;
    for(int i =0,j =i+1;i<n-1;)
    {
        if(abs(arr[i]-arr[j])==key)
        {
            count++;
        }
        j++;
        if(j==n)
        {
            i = i+1;
            j= i+1;
        }           
    }
    return count;
}
int main()
{
     int t ;
    cin>>t;
    while(t>0)
    {
        int n =0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
          cin>>arr[i];
        int key;
        cin>>key;
        int c = search(arr, n, key);
        cout<<c<<endl;
        t--;
    }
}
