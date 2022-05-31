///ALLAH HU AKBAR
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define mx 101 
using namespace std;
vector <int> graph[mx];
int dis[mx];
bool vis[mx];
queue <int> q;
int bfs(int source)
{
   q.push(source);
   dis[source]=0;
   vis[source]=1;
   while(!q.empty())
   {

       int node=q.front();
       q.pop();
     for(int i=0;i<graph[node].size();i++)
       {
           int next=graph[node][i];
           if(vis[next]==0)
           {
               vis[next]=1;
               dis[next]=dis[node]+1;
               q.push(next);
           }
       }
   }

}

int main()
{
   int nodes,edges;
   cin>>nodes>>edges;
   for(int i=1;i<=edges;i++)
   {
       int u,v;
       cin>>u>>v;
       graph[u].push_back(v);
       graph[v].push_back(u);

   }
   bfs(1);
   cout<<"From node 1 "<<endl;
   for(int i=1;i<=nodes;i++)
   {
       cout<<"Distance of  "<<i<<" is "<<dis[i]<<endl;
   }
}