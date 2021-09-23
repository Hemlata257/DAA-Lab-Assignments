#include<iostream>
using namespace std;
void merge(int [], int, int,int,int []);
void mergesort(int arr[], int l, int r,int count[])
{ 
  int mid;
  if(l<r)
  {
       mid = l+(r-l)/2;
      mergesort(arr,l,mid,count);
      mergesort(arr,mid+1,r,count);
      merge(arr,l,mid,r,count);
  }

}
void merge(int arr[], int l, int m , int r,int count[]) 
{
  int i = l ,j = m+1, k = 0;
  int t[r-l+1];
   while(i<=m&&j<=r)
   {
       if(arr[i]<arr[j])
        {
            t[k++] = arr[i++];
            count[0]++;
        }
       else 
          {
              t[k++] = arr[j++];
              count[0]++;
              count[1]+= (m-i+1);
          } 
   }
   while(i<=m)
    {
        t[k++] = arr[i++];
    }
   while(j<=r)
     t[k++] = arr[j++]; 
    for(i = l,j=0;i<=r;i++,j++)
    {
        arr[i] = t[j];
    } 

}
int main()
{
    int t ;
    cin>>t;
    while(t>0)
    {
        int n =0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        int count[2] ={};
        mergesort(arr,0,n-1,count );
        for(int i =0;i<n;i++)
          cout<<arr[i]<<" ";
        cout<<"\ncomparisons="<<count[0]<<"\nInversions="<<count[1]<<endl; 
        t--;
    }
}