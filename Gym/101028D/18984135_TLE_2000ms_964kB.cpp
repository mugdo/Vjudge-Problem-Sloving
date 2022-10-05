#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int T=0;T<t;t++)
    {
        int r,c,n;
        cin>>r>>c>>n;
        char ar[1000][1000];
        for(int i=0;i<1000;i++)
        {
            for(int j=0;j<1000;j++)
            {
                ar[i][j]='.';
            }
        }
        int r1,c1,r2,c2;
        char a;
        for(int i=0;i<n;i++)
        {

           cin>>r1>>c1>>r2>>c2>>a;
           for(int j=r1;j<=r2;j++)
           {
               for(int k=c1;k<=c2;k++)
               {
                   ar[j][k]=a;
               }
           }
        }
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                cout<<ar[i][j];

            }
            cout<<endl;
        }
    }
    return 0;
}
