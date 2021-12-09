#include<iostream>
#include<algorithm>
using namespace std;
void findMajority(int arr[],int n)
{
    int maxCount =0;
    int index =-1;
    for(int i =0;i<n;i++)
    {
        int count =0;
        for(int j =0; j<n;j++)
        {
            if(arr[i] == arr[j])
               count++;
        }
        if(count > maxCount){
            maxCount = count;
            index =i;
        }
    }
    if(maxCount > n/2)
      cout<<"Yes";
    else
      cout<<"No";
}
double findMedian(int arr[],int n)
{
    sort(arr,arr+n);
    if(n%2!=0)
      return (double)arr[n/2];
    else
     return (double)(arr[(n-1)/2]+arr[n/2])/2.0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
        findMajority(arr,n);
        cout<<endl<<findMedian(arr,n);
}