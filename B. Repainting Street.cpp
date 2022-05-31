///ALLAH HU AKBAR
///BIsmillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    return a.second>b.second;
}
int main()
{
   int n;
   cin>>n;
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
     int val;
     cin>>val;
     mp[val]++;
   }
   sort(mp.begin(),mp.end(),cmp);
     for(auto& it : mp)
     cout<<it.first<<" "<<it.second<<endl;
}
///Alhumdulillah 
