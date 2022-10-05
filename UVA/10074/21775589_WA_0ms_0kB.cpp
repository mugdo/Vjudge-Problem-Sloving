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
        int br[n][m];
        int mk=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              cin>>ar[i][j];
              br[i][j]=0;
            }
        }
        int sum=0;
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<m;j++)
            {

              sum+=ar[i][j];
              br[i][j]=sum;
            }
        }
        int sum2=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<1;j++)
            {
              sum2+=ar[i][j];
              br[i][j]=sum2;
            }
        }

        for(int i=1;i<n;i++)
        {
            //cout<<"ss"<<endl;
            for(int j=1;j<m;j++)
            {
              //cout<<"ar[i-1][j]="<<ar[i-1][j]<<"  br[i][j-1]="<<br[i][j-1]<<endl;
              int sm=0;
              sm+=br[i-1][j];
               //cout<<sm<<endl;
              sm+=br[i][j-1];
               // cout<<sm<<endl;
              sm+=ar[i][j];
              //cout<<"br["<<i<<"]["<<j<<"]="<<sm<<endl;
             // cout<<"ssum="<<sum<<endl;
              if(i-1>=0&&j-1>=0)
              {
                  sm=sm-br[i-1][j-1];
              }
              br[i][j]=sm;
             // cout<<"br[i][j]="<<br[i][j]<<endl;
             // mk=max(mk,br[i][j]);
            }
        }


    int p1,p2;
    int mm=0;
    int sm=0;

    int a,b,c;
    int pk=0;

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               for(int k=i;k<n;k++)
               {
                   for(int l=j;l<m;l++)
                   {
                       a=0;
                       b=0;
                       c=0;
                        if(i-1>=0)
                        {
                           a=br[i-1][l];
                        }
                         if(j-1>=0)
                         {

                           b=br[k][j-1];
                         }
                          if(i-1>=0&&j-1>=0)
                         {
                             //cout<<"i-1="<<i-1<<" j-1="<<j-1<<endl;
                            c=br[i-1][j-1];
                           // cout<<"a="<<a<<endl;
                         }
                         //cout<<"br["<<k<<"]["<<l<<"]="<<br[k][l]<<endl;
                         sm=br[k][l]-a-b+c;
                         //cout<<"a="<<a<<"  b="<<b<<"  c="<<c<<endl;
                        // cout<<"sm="<<sm<<endl;
                        if(sm==0)
                        {
                            //cout<<"l="<<l<<endl;
                            if(k==0)
                             pk=max(pk,(l)*(k+1));
                             else if(l==0)
                                pk=max(pk,(l+1)*(k));
                             else
                                pk=max(pk,(l+1-j)*(k+1-i));
                        }
                         sm=0;

                   }
               }
              // cout<<endl;
           }
       }
       //cout<<m<<endl;
       cout<<pk<<endl;
    }


    return 0;
}
