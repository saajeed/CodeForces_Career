///ALLAH HU AKBAR
///Bismillahir Rahamanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        int first=0;
        int second=0;
        int cheak=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='('||str[i]=='?')
              first++;
            else 
            second++;
           
            if(second>first)
            {
             cheak=1;
             break;
            }  
        }
        first=0;
        second=0;

          for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]==')'||str[i]=='?')
              second++;
            else 
            first++;
             //cout<<first<<" "<<second<<endl;
            if(second<first)
            {
             cheak=1;
             break;
            }  
        }
          if(cheak)
           cout<<"NO"<<endl;
           else
           {
               first=0;
               second=0;
               int q=0;
                for(int i=0;i<str.size();i++)
                {
                    if(str[i]=='(')
                       first++;
                    else if(str[i]=='?')
                      q++;
                      else 
                      second++;
    
                }
                if(first!=second && q==abs(first-second))
                   cout<<"YES"<<endl;
                else if(first==second && q%2==0)
                   cout<<"YES"<<endl;
                else 
                     cout<<"NO"<<endl;
                   
               
           }
           
    }
  
   
}