///ALLAH HU AKBAR
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    double m,n;
    while(1)
    {

        cin>>m>>n;
        if(m==0&&n==0)
        break;
        double a=m;
        double b=n;
       double ans=1;
       n=max(m-n,n);
       while(n)
       {
           ans=ans*(m/n);
           m--;
           n--;
       }
       printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",a,b,ans);


    }
}