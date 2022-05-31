///ALLAH HU AKBAR
///BIsmillahir Rahamnir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int w,h,n;
    cin>>w>>h>>n;
    int count=1;
        if(w%2==0)
        {
            while(w%2==0)
            {
                count = count * 2;
                w=w/2;
            }
        }
        if(h%2==0)
        {
            while(h%2==0)
            {
                count=count*2;
                h=h/2;
            }
        }
        //cout<<count<<endl;
        if(count>=n)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
}