#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[5]={"***","*.*","***","*.*","*.*"};
    string b[5]={"***","*.*","***","*.*","***"};
    string c[5]={"***","*..","*..","*..","***"};
    string d[5]={"***","*.*","*.*","*.*","***"};
    string e[5]={"***","*..","***","*..","***"};
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<5;i++)
    {
        //cout<<"i="<<i<<endl;
        for(int j=0;j<n;j++)
        {
          if(s[j]=='A')
          {
              cout<<a[i];
          }
           if(s[j]=='B')
          {
              cout<<b[i];
          }
           if(s[j]=='C')
          {
              cout<<c[i];
          }
           if(s[j]=='D')
          {
              cout<<d[i];
          }
           if(s[j]=='E')
          {
              cout<<e[i];
          }
        }
        cout<<endl;
    }





    return 0;
}
