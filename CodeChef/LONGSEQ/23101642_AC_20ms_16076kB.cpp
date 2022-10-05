#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int j=0;j<t;j++)
    {

       string s;
       cin>>s;
       int len=0,ck=0,zero=0,one=0;
       len=s.size();
       for(int i=0;i<len;i++)
       {
           //cout<<"s[i]="<<s[i]<<" s[i+1]="<<s[i+1]<<endl;
           if(s[i]=='0')
           {
               zero++;
           }
           else
           {
               one++;
           }
       }
       if(one==1||zero==1)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }


    }
    return 0;
}
