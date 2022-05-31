///ALLAH HU AKBAR
///bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define mx 10000
using namespace std;
vector< int > graph[mx];
bool vis[mx];
int dis[mx];
int bfs(int source)
{
   vis[source]=1;
   dis[source]=0;
   queue< int > q;
   q.push(source);
   while(!q.empty())
   {
       int node = q.front();
       q.pop();
       for(int i=0;i<graph[node].size();i++)
       {
           
           int next = graph[node][i];
           if(vis[next]==0)
           {
             dis[next]=dis[node]+1;
              vis[next]=1;
              q.push(next);
           }

       }

   }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int node,edges;
    cin>>node>>edges;
    for(int i=1;i<=edges;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
   
    bfs(1);
    cout<<dis[node]<<endl;


}
}
