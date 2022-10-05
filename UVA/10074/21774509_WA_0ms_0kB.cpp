#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0||m==0)
        {
            break;
        }
        int ar[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        int mk=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ck=0;
                int k=i,p=j;
                //cout<<"i="<<i<<"   j="<<j<<endl;
                if(ar[k][p==0])
                {
                    for(k=i;k<n;k++)
                    {
                        for(p=j;p<m;p++)
                        {
                            if(ar[k][p]==0)
                            {
                                mk=max(mk,k+1*p+1);
                                //cout<<"mk="<<mk<<endl;
                            }
                        }

                    }
                }


            }
        }
        cout<<mk<<endl;
    }

    return 0;
}
