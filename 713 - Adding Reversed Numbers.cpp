///ALLAH HU AKBAR
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int po(int a,int b)
{
    int ans=1;
    while(b--)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n,m;
    cin>>m>>n;
    int a=m;
    int b=n;
    int count_n=0;
    int count_m=0;
    int x=m;
    while(m/10)
    {
        count_m++;
        m=m/10;
    }
    
    //cout<<count_m<<endl;
    while(n/10)
    {
        count_n++;
        n=n/10;
    }
    int a1=0;
    while(a/10)
    {
        a1=a1+(a%10)*po(10,count_m);
        count_m--;
        a=a/10;
    }
    a1=a1+a%10;
    //cout<<a1<<endl;
    int b1=0;
    while(b/10)
    {
        b1=b1+(b%10)*po(10,count_n);
        count_n--;
        b=b/10;   
     }
     b1=b1+b%10;
     //cout<<b1<<endl;
     int c=a1+b1;
     int ans=c;
     int count_c=0;
     while(ans/10)
     {
         count_c++;
         ans=ans/10;
     }
     int c1=0;
     while(c/10)
     {
         c1=c1+(c%10)*pow(10,count_c);
         count_c--;
         c=c/10;
     }
     c1=c1+c%10;
     cout<<c1<<endl;
    }   
}
