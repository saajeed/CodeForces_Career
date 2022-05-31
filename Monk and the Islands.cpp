///ALLAH HU AKBAR
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>> tc;
    while(tc--)
    {
 
   ll nodes,edges;
   cin>>nodes>>edges;
   vector <ll> graph[nodes+10];
   int dis[nodes +10];
   int visited[nodes+10];
   memset(visited,0,sizeof visited);
   memset(dis,0,sizeof dis);
   for(int i=1;i<=edges;i++)
   {
       ll u,v;
       cin>>u>>v;
       graph[u].push_back(v);
       graph[v].push_back(u);
   }
     
    visited[1]=1;
    dis[1]=0;
    queue<ll>q;
    q.push(1);
    while(!q.empty())
    {
       ll node = q.front();
        q.pop();
        for(int i=0;i<graph[node].size();i++)
        {
            ll next= graph[node][i];
            if(visited[next]==0)
            {
                q.push(next);
                visited[next]=1;
                dis[next]=dis[node]+1;
            }
        }
    }
    cout<<dis[nodes]<<endl;
    
    }

}