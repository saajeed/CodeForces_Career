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
        string str1,str2;
        cin>>str1>>str2;
        int Red=0;
        int Blue=0;
        int equal=0;
        for(int i=0;i<n;i++)
        {
            if(str1[i]>str2[i])
            Red++;
            else if(str1[i]<str2[i])
            Blue++;
            else
            Red++,Blue++;
            
        }
        if(Red>Blue)
        {
            cout<<"RED"<<endl;
        }
        else if(Red<Blue)
        {
            cout<<"BLUE"<<endl;
        }
        else
        {
            cout<<"EQUAL"<<endl;
        }
        

    }
}