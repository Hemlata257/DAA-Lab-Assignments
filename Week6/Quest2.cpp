#include<iostream>
#include<queue>
using namespace std;
int main()
 {
     int v;
     cin>>v;
     int g[v][v];
     for(int i =0;i<v;i++)
     {
         for(int j=0;j<v;j++ )
            cin>>g[i][j];
     }
    queue<int> q;
    int colored[v];
    int c = 1,s =0;
    for(int i =0;i<v;i++)
      colored[i] =0;
    colored[0] = c;
    q.push(s);
    while(!q.empty())
    {
       int u = q.front();
       q.pop(); 
       cout<<u<<" "<<c<<" ";
       if(g[u][u]!=0)
        {
            cout<<"Not bipartite";
            exit(0);
        }
       c*=-1;
       
        for(int i = 0;i<v;i++)
        {
            if(g[u][i] != 0)
            {
                
                if(colored[i]==0)
                  {
                      colored[i] = c;
                      q.push(i); 
                  }
                else 
                  {
                      if(colored[i]==colored[u]) 
                       {
                        cout<<"Not Bipartite";
                        exit(0);      
                       }
                  }
            }
        }
    }
    cout<<"Bipartite";
 }