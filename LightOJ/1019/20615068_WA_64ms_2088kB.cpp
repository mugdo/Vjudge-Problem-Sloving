#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        getline(cin,s);
        int n,m;
        cin>>n>>m;
        int ar[n+10][n+10]={999999};
        int a,b,w;
          for(int j=0;j<=n;j++)
            {
                for(int k=0;k<=n;k++)
                {

                    ar[j][k]=99999;
                }
            }

        for(int j=0;j<m;j++)
        {
            cin>>a>>b>>w;
            ar[a][b]=w;
            ar[b][a]=w;
           // cout<<"ar["<<a<<"]["<<b<<"]="<<ar[a][b]<<endl;
           // cout<<"ar["<<b<<"]["<<a<<"]="<<ar[b][a]<<endl;
        }

        cout<<endl;
        for(int p=1;p<=n;p++)
        {
            for(int q=1;q<=n;q++)
            {
                for(int r=1;r<=n;r++)
                {
                    ar[q][r]=min(ar[q][r],ar[r][p]+ar[p][q]);
                }
            }
        }

        if(ar[1][n]==99999)
        {
            if(n!=1)
            {
                cout<<"Case "<<i+1<<": "<<"Impossible"<<endl;
            }
            else
            {
                cout<<"Case "<<i+1<<": 0"<<endl;
            }
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<ar[1][n]<<endl;
        }

    }
    return 0;
}
