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
        set<int>st;
        cin>>n;
         for(int i=0;i<n;i++)
         {
             int val;
             cin>>val;
             if(st.count(val))
                 val++;
             st.insert(val);    
         }
       cout<<st.size()<<endl;       

         
    }
}
