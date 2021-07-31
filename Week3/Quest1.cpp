#include<iostream>
using namespace std;
int  search(int arr[], int n, int key, bool flag)
{
     int l = 0, r = n-1,res = -1; 

    while(l<=r)
    {
        
        int mid = l + (r-l)/2;
        
        if(arr[mid] == key) 
          {
              res = mid;
              if(flag == true)
                r = mid-1;
              else
                l = mid+1;  
          }
        else{
            if(arr[mid]<key)
              l = mid+1;
            else
              r = mid-1;  
        }   
        
    }
    return res;

}
 int main()
{
    int t ;
    cin>>t;
    while(t>0)
    {
        int n = 0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        int key;
        cin>>key;
   int first = search(arr,n,key, true);
   if(first==-1)
      cout<<"Not Present";
    else{
        int last = search(arr,n , key,false);
        cout<<key<<" - "<<(last-first +1)<<endl;;
    }  
        t--;
    }
}
