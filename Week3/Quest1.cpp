//Sorting an unsorted array using insertion sort
#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int> arr, int n)
{
    int shift = 0, comp = 0; 
    for(int i = 1;i<n;i++)
    {
        int t = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>t)
        {
            comp++;
            shift++;
            arr[j+1] = arr[j];
            j = j-1;   
            arr[j+1] = t;            
        }
        if(i-j>=2)
          shift++;
        if(j>=0)  
          comp++;
    }
    for(int i = 0; i<n; i++)
           cout<<arr[i]<<" ";
    cout<<"\n"<<"comparisons- "<<comp<<endl;
    cout<<"shift- "<<shift<<endl;       


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
        insertion(arr,n);
        t--;
    }
}