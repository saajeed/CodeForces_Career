#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    ll n,a,b,c;
    cin>>a>>b>>c;
    n=(a+b+c)/9;
    if((a+b+c)%9==0&&a>=n&&b>=n&&c>=n)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        
    }
}