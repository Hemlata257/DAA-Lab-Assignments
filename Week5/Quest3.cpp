#include<iostream>
using namespace std;
void find(int a1[] , int a2[], int n ,int m)
{

    for(int i =0 , j =0; i<n&&j<m;)
    {
      
        if(a1[i] == a2[j])
          {
              cout<<a1[i]<<" ";
              i++;
              j++;
          }
        else{
          if(a1[i]<a2[j])
            i++;
          else 
            j++;
        }
        
    }
}
int main()
{
   
        int n;
        cin>>n;
        int a1[n];
        for(int i =0; i<n ;i++)
          cin>>a1[i];
        int m;  
        cin>>m;
        int a2[m];
        for(int i =0; i<m ;i++)
          cin>>a2[i];
        find(a1,a2,n,m);
}