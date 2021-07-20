//Implementing jump search to to search for an lement in a sorted array
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void jump(vector<int> arr, int n, int num)
{
    int j = sqrt(n);
    bool flag = false;
    int prev = 0, i, k,c=0;
    for( i = 0;arr[i]<=num;i = i+j)
    {
        c++;
        if(arr[i]>num||i>=n)
          break;
        prev = i;  
        
    }
    for(k = prev; k<=i; k++)
     {
         c++;
        if(arr[k] == num)
         {
            cout<<"Present"<<c;
            flag = true;
            break;
        }
        if(arr[k]>num)
          break;         
    }
    if(!flag)
     cout<<"Not Present"<<c;
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
        jump(arr,n,num);
        t--;
    }
}