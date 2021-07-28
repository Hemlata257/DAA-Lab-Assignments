//Implementing jump search to to search for an lement in a sorted array
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void jump(vector<int> arr, int n, int num)
{
    int j = floor(sqrt(n));
    int steps = j;
    bool flag = false;
    int prev = 0, i, k,c=0;
    while(arr[min(steps,n)-1]<num)
    {
      c++;
      prev = steps ;
      steps+= j;
      if(prev>=n)
         break;
    } 
    while(arr[prev]<num)
    {
      c++;
      prev++;
      if(prev == min(steps,n))
         break;
    }
    if(arr[prev]==num)
       {
         c++;
         flag = true;
       }
    if(!flag)
      cout<<"Not Present "<<c<<endl;  
    else
      cout<<"Present "<<c<<endl;  

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