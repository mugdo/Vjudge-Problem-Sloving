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
                    if(j==k)
                    {
                        ar[j][k]=0;
                    }
                    else
                    ar[j][k]=99999;
                }
            }

        for(int j=0;j<m;j++)
        {
            cin>>a>>b>>w;
            ar[a][b]=min(w,ar[a][b]);
            ar[b][a]=min(w,ar[b][a]);
           // cout<<"ar["<<a<<"]["<<b<<"]="<<ar[a][b]<<endl;
           // cout<<"ar["<<b<<"]["<<a<<"]="<<ar[b][a]<<endl;
        }

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

                cout<<"Case "<<i+1<<": "<<"Impossible"<<endl;

        }
        else
        {
            cout<<"Case "<<i+1<<": "<<ar[1][n]<<endl;
        }

    }
    return 0;
}
