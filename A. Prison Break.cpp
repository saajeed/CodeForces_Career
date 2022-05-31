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
       int sum=0;
       int n,m,r,c;
       cin>>n>>m>>r>>c;
      int x=abs(r-1)+abs(c-1);
        sum=max(x,sum);
        x = abs(r-1)+abs(c-m);
         sum=max(x,sum);
         x=abs(r-n)+abs(c-1);
          sum=max(x,sum);
          x= abs(r-n)+abs(c-m);
           sum=max(x,sum);
        cout<<sum<<endl;



   }
}
///Alhumdulillah 