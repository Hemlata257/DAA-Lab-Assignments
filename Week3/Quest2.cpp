//Sorting an unsorted array using selection sort
#include<iostream>
#include<vector>
using namespace std;
void selection(vector<int> arr, int n)
{
    int comp =0, shift =0;
    for(int i =0;i<n-1;i++)
    {
        int min =i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
            comp++;
        }
              shift++;
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            
    }
    for(int i =0;i<n;i++)
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
        selection(arr,n);
        t--;
    }
}