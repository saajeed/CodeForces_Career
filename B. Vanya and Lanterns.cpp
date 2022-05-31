///ALLAH HU AKBAR
//Bismillahir Rahamanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,n;
    cin>>n>>l;
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        int va;
        cin>>va;
        vc.push_back(va);
    }
    sort(vc.begin(),vc.end());
   /* for(auto el:vc)
    cout<<el<<endl; */
    int ans=0;
    if(vc[0]!=0&&vc[vc.size()-1]!=l)
      {
          ans=max(vc[0],l-vc[vc.size()-1])*2;
           for(int i=0;i<n-1;i++)
        {
            ans=max(ans,vc[i+1]-vc[i]);
        }
        cout<<fixed<<setprecision(10)<<ans/2.0<<endl;
      }
      //cout<<ans<<endl;
    else if(vc[0]!=0)
    {
      ans=vc[0]*2;
       for(int i=0;i<n-1;i++)
        {
            ans=max(ans,vc[i+1]-vc[i]);
        }
        cout<<fixed<<setprecision(10)<<ans/2.0<<endl;
    }  
    else if(vc[vc.size()-1]!=l)
    {
        ans=(l-vc[vc.size()-1])*2;
         for(int i=0;i<n-1;i++)
        {
            ans=max(ans,vc[i+1]-vc[i]);
        }
        cout<<fixed<<setprecision(10)<<ans/2.0<<endl;
    
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,vc[i+1]-vc[i]);
        }
        cout<<fixed<<setprecision(10)<<ans/2.0<<endl;
        
    }
    
    


}