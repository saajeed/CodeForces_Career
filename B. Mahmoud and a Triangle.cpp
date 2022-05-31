///ALLAH HU AKBAR
///Bismillahir Rahamnir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it : v)
    {
      cin>>it;        
    }
    sort(v.begin(),v.end());
  int x = v.size()-1;
  for(int i=2;i<=x;i++)
  {
    if(v[i]<v[i-1]+v[i-2])
    {
      cout<<"YES"<<endl;
      return 0;
    }
    if(v[x]<v[x-1]+v[x-2])
    {
      cout<<"YES"<<endl;
      return 0;
    }

  }
  cout<<"NO"<<endl;
    
    
    
}
