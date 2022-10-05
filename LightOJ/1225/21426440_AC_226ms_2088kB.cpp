#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        int len=0;
        len=s.size()-1;
        int ck=0;
        for(int i=0;i<s.size()/2;i++)
        {
           if(s[i]!=s[len])
           {
               ck=1;
           }
           else
           {
               len--;
           }
        }
        if(ck==0)
        {
            cout<<"Case "<<j+1<<": "<<"Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<j+1<<": "<<"No"<<endl;
        }
    }
    return 0;
}
