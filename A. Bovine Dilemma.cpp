///Bismillahir Rahmanir Rahim
///ALLAH HU AKBAR
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
    vector <int> a(n);
    set<int>st;
    for(auto &el:a)
       cin>>el;
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
                 {
                     int x=abs(a[i]-a[j]);
                     st.insert(x);
                 }
       }
       cout<<st.size()<<endl;
    }

}