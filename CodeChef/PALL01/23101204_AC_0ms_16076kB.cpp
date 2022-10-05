#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int ck=0,con=0;
        for(int j=s.size()-1;j>=0;j--)
        {
          if(s[j]!=s[ck])
          {
              con=1;
              break;
          }
          ck++;
        }
        if(con==1)
        {
            cout<<"losses"<<endl;
        }
        else
        {
            cout<<"wins"<<endl;
        }

    }
    return 0;
}
