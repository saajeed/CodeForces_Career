///ALLAH HU AKBAR
///Bismillahir Rahamanir Rahim
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ll n ;
   //cout<<"Sajid"<<endl;
   cin>>n;
   vector<ll> vc;
   vector<ll>vcs;
   for(int i=0;i<n;i++)
   {
      ll val;
       cin>>val;
       vc.push_back(val);
       vcs.push_back(val);
   }
   sort(vcs.begin(),vcs.end());
  ll q;
   cin>>q;
   while(q--)
   {
       ll t,l,r;
       cin>>t>>l>>r;
       ll sum=0;
       if(t==1)
       {
           for(int i=l-1;i<=r-1;i++)
           sum=sum+vc[i];
       }
       else if(t==2)
       {
           for(int i=l-1;i<=r-1;i++)
           sum=sum+vcs[i];
       }
       cout<<sum<<endl;

   }
}