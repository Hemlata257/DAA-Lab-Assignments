#include<iostream>
using namespace std;
int quicksort(int [], int, int,int);
int partition(int arr[], int l, int u )
{
  int pivot = arr[u];
  int i=l-1,j;
    for(j =l;j<u;j++)
    {
       if(arr[j]<=pivot)
        {
          i++;
          int t = arr[i];
          arr[i] = arr[j];
          arr[j] = t;
        }
    }
    int t = arr[i+1];
    arr[i+1] = arr[u];
    arr[u] = t;
    return i+1;
}
int quicksort(int arr[], int l, int u, int pos)
{
  if(pos > 0 && pos<=u-l+1)
  {
    int p = partition(arr,l,u);

    if(p-l == pos-1)
       return arr[p];
    if(p-l > pos-1)
        return quicksort(arr, l, p-1 ,pos);
    return quicksort(arr, p + 1, u,pos-p+l-1);
  }
  return -1;
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
        for(int i=0;i<n;i++)
           cin>>arr[i];
        int pos;
        cin>>pos;        
        cout<<quicksort(arr,0,n-1,pos)<<endl;
           t--;
        
    }
}