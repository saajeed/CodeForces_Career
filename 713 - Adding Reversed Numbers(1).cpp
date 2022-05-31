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
    string a,b,c,sum;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(b.size()>a.size())
       swap(a,b);
    if(a.size()>=b.size())
    {
        for(int i=0;i<a.size();i++)
        {
            c.push_back('0');
            sum.push_back('0');
        }
        int s= c.size()-1;
        for(int i=b.size()-1;i>=0;i--)
        {
            c[s]=b[i];
            s--;
        }
           
    }
    else
    { 
         for(int i=0;i<b.size();i++)
         {
            c.push_back('0');
            sum.push_back('0');
         }
             int s= c.size()-1;
        for(int i=a.size()-1;i>=0;i--)
        {
            c[s]=a[i];
            s--;
        }
           
    }
    sum.push_back('0');
    int flag=0;
    int i;
    for( i=a.size()-1;i>=0;i--)
    {
       // cout<<a[i]<<" "<<c[i]<<endl;
        int x=(a[i]-'0')+(c[i]-'0');
        if(flag==1)
        {
            x=x+1;
            flag=0;
        }
        if(x<=9)
        {
           sum[i+1]=x+'0';
           //cout<<sum[i+1]<<endl;
        }
        else
        {
            flag=1;
            sum[i+1]=x%10+'0';
            //cout<<"x"<<endl;
            //cout<<sum[i+1]<<endl;

        }
        
    }
    if(flag==1)
    {
        sum[i+1]='1';
    }
    else
    sum.erase(sum.begin()+0);
    flag=0;

    reverse(sum.begin(),sum.end());
    for(int i=0;i<sum.size();i++)
    {
        if(sum[i]=='0'&&flag==0)
        {
            continue;
        }
        else
        {
            cout<<sum[i];
            flag=1;
        }
        
    }
    cout<<endl;
    sum.clear();
    c.clear();
    a.clear();
    b.clear();

    }
       
      

    
}