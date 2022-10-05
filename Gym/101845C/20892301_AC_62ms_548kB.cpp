#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.size();
    int n;
    cin>>n;
    int ar[210][210];
    for(int i=33;i<=126;i++)
    {
        for(int j=33;j<=126;j++)
        {
            ar[i][j]=99999999;
        }
    }

    char a,b;
    int c;
    int p,q;
    int mk=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        ar[a][b]=min(c,ar[a][b]);
    }
     for(int k=33;k<=126;k++)
        {
            for(int i=33;i<=126;i++)
            {
                for(int j=33;j<=126;j++)
                {
                    ar[i][j]=min(ar[i][j],ar[i][k]+ar[k][j]);
                }
            }
        }
    long long sum=0;
    int k1,k2;
    for(int i=0;i<len1;i++)
    {
            if(s1[i]!=s2[i])
            sum+=ar[s1[i]][s2[i]];
    }
    if(sum>=99999999)
    {
        cout<<"-1"<<endl;
    }
    else
       cout<<sum<<endl;
    return 0;
}
