#include<iostream>
using namespace std;
void countmax(string str, int n){
    if(n==0)
     return;
    int count[26] ={};
    for(int i = 0;i <n; i++)
    {
        count[str[i]-'a']++;
    }
    int maxele = 0;
    char maxchar;
    for(int i =0; i<26 ;i++)
    {
        if(count[i]>maxele)
        {
            maxele = count[i];
            maxchar = 'a'+i;
        }
    }
    if(maxele>1)
     cout<<maxchar<<"-"<<maxele;
    else
      cout<<"No duplicate elements present in the string"<<endl;   
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string str;
        int n;
        cin>>n;
        cin>>str;
        countmax(str,n);
        t--;

    }
}