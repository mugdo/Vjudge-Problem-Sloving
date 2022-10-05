#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s[n];
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
        }
        string ss;
        sort(s,s+n);
        int flag=0,con=0,ck=0,sum=0;
        for(int j=0;j<n;j++)
        {
           ss=s[j];
           //cout<<"ss="<<ss<<endl;
           for(int k=j;k<n;k++)
           {
               con=0;
               ck=0;
               //cout<<"s[k]="<<s[k]<<endl;

               if(s[k].size()>=ss.size())
               {
                   for(int p=0;p<ss.size();p++)
                   {
                       //cout<<"ss[ck]="<<ss[ck]<<"  s[k][p]="<<s[k][p]<<endl;
                       if(ss[ck]!=s[k][p])
                       {
                           con=1;
                           break;
                       }
                       ck++;
                   }
               }
               else
               {
                   con=1;
               }
               //cout<<"con="<<con<<endl;
               if(con==0)
               {
                    flag++;
               }
           }
           //cout<<"flag="<<flag<<endl;
           if(flag>=2)
           {
               sum=1;
           }
           flag=0;
        }
        if(sum==0)
        {
            cout<<"Case "<<i+1<<": "<<"YES"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<"NO"<<endl;
        }
    }
    return 0;
}
