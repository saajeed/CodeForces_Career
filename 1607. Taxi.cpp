///ALLAH HU AKBAR
///Bismillahir Rahamnir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while(a<c)
    {
        a=min(a+b,c);
        c=max(c-d,a);
        //cout<<a<<" "<<c<<endl;
    }

    cout<<a<<endl;
}