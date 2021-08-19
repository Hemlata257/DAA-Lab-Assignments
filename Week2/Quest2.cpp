#include<iostream>
#include<vector>
using namespace std;
int search( vector<int> arr, int l , int r , int key)
{

    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] == key) 
          {
            return mid;
          }
        else{
           
            if(arr[mid]<key)
              l = mid+1;
            else
              r = mid-1;  
        }   
    }
    return -1;

}
int main()
{
    int t ;
    cin>>t;
    while(t>0)
    {
        int n = 0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
          cin>>arr[i];
         int i,j,idx=-1;
         
        for( i = 0 , j =i+1; i < n-1 ;)
        {
          idx = search(arr ,j , n-1 , arr[i]+arr[j]);
           if(idx!= -1)
            {
                cout<<i+1<<" "<<j+1<<" "<<idx+1<<" "<<endl;
                break;
            }
           j++; 
           if(j==n)
              {
                  i++;
                  j = i+1;
              } 
        }
        if(idx == -1)
          cout<<"Not Present "<<endl;
        t--;
    }
}