///ALLAH HU AKBAR
///Bismillahir Rahmanir Rahim
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
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            mp[val]++;
        }
       // cout<<mp[1]<<" "<<mp[2]<<endl;
        if(mp[1]==0 )
        {
            if(mp[2]%2==0)
           cout<<"YES"<<endl;
           else
           {
               cout<<"NO"<<endl;
           }
           
        }
        else if(mp[2]==0 )
        {
            if(mp[1]%2==0)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else
        {
            int sum = mp[1]*1+mp[2]*2;
            if(sum%2==0)
            {
                cout<<"YES"<<endl;
            }
            else 
            cout<<"NO"<<endl;    
        }

        

    }
}