///ALLAH HU AKBAR
///Bismillahir Rahmanir Rahim
#include<bits/stdc+.h>
#define ll long long
using namespace std;
int main()
{
    ll nodes,edges;
    cin>>nodes>>edges;
    vector < ll > graph[nodes]; 
    for(ll i=0;i<edges;i++)
    {
        ll u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        
//01840280566
    }
   

    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll sources;
        cin>>sources;
         vector <bool> visited(nodes);
         vector <int> dis(nodes); 
         visited[sources]=1;
          dis[sources]=0;
          queue< ll > q;
          q.push(sources);
          while(!q.empty())
          {

          }


    }
}