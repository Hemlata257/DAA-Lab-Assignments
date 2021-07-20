//Implementing Binary search to search for an element in a sorted array
#include<iostream>
#include<vector>
using namespace std;
void binary(vector<int> arr, int n, int num )
{
    //l stores left index and r stores right index of the array
    int l = 0, r = n-1, i = 1; 
    bool flag = false;
    while(l<=r)
    {
        //calculating the mid value
        int mid = l + (r-l)/2;
        //if num is equal to mid value then element is present
        if(arr[mid] == num) 
          {
            cout<<"Present"<<i;
            flag = true;
            break;
          }
        else{
            //else, if num is greater than mid value increase l else decrease r by one
            if(arr[mid]<num)
              l = mid+1;
            else
              r = mid-1;  
        }   
        i++;
    }
    if(!flag)
       cout<<"Not Present "<<i-1;
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
        int num;
        cin>>num;
        binary(arr,n,num);
        t--;
    }
}