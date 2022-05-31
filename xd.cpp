///ALLAH HU AKBAR
///Bismillahir Rahamanir Rahim
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   int n ;
   cin>>n;
   vector<int> vc;
   vector<int>vcs;
  ll prefv[n+1];
  ll  prefvs[n+1];
   for(int i=0;i<n;i++)
   {
       int val;
       cin>>val;
       vc.push_back(val);
       vcs.push_back(val);
   }
   sort(vcs.begin(),vcs.end());
    prefv[0]=0;
    for(int i=0;i<=n;i++)
    {
        prefv[i+1]=prefv[i]+vc[i];
    }
    prefvs[0]=0;
    for(int i=0;i<n;i++)
    {
        prefvs[i+1]=prefvs[i]+vcs[i];
    }
   int q;
   cin>>q;
  while(q--)
   {
       ll t,l,r;
       cin>>t>>l>>r;
       if(t==1)
       {
           cout<<prefv[r]-prefv[l-1]<<endl;
       }
       else
       {
         cout<<prefvs[r]-prefvs[l-1]<<endl;
       }
    

   }
}