///Bismillahir Rahmanir Rahim
///ALLAH HU AKBAR
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      int n;
      cin>>n;
      vector<int> vc;
      for(int i=0;i<n;i++)
      {
          int val;
          cin>>val;
          vc.push_back(val);
      }
      int mx=0;
      for(int i=0;i<n;i++)
      {
          int sum=0;
          for(int j=i;j<n; j=j+vc[j])
          {
          sum=sum+vc[j];
         
          }
 
          mx=max(mx,sum);
      }
      cout<<mx<<endl;
  }