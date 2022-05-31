///ALLAH HU AKBAR
///Bismillahir Rahamnir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    map <int,int> mp;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        mp[i]++;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n/i;j++)
           {
               mp[i*j]++;
           }
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]%2==1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    mp.clear();
    }
    
}