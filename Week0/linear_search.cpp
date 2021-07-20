#include<iostream>
#include<vector>
using namespace std;
void linear(vector<int>arr, int n, int num)
{
    int i;
    bool flag = false;
    for( i =0;i<n;i++)
    {
        if(arr[i] == num)
        {
            cout<<"Element found at "<<i+1<<"index"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
      cout<<"Element not found"<<i+1<<endl;

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
        linear(arr,n,num);
        t--;
    }
}