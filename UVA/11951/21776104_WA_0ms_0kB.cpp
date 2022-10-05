#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int T=1;T<=t;T++)
    {
        int n,m,k;
        cin>>n>>m>>k;

        int ar[n][m];
        int br[n][m];
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
            for(int j=1;j<m;j++)
            {
              int sm=0;
              sm+=br[i-1][j];
              sm+=br[i][j-1];
              sm+=ar[i][j];
              sm=sm-br[i-1][j-1];
              br[i][j]=sm;
            }
        }


    int p1,p2;
    int mm=0;
    int sm=0;
    int mk=0;
    int a,b,c;
    int pk=0;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            cout<<br[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<endl;

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               for(int r=1;i+r-1<n;r++)
               {
                   for(int c=1;c+j-1<m;c++)
                   {
                      int sum=0;
                      if(i==0&&j==0)
                      {
                          //cout<<"i="<<i<<" j="<<j<<endl;
                          sum=br[i+r-1][j+c-1];
                      }
                      else if(i==0)
                      {
                          sum=br[i+r-1][j+c-1]-br[i+r-1][j-1];
//                          cout<<"i="<<i<<" j="<<j<<" sum="<<sum<<endl;
//                          cout<<"br["<<i+r-1<<"]["<<j+c-1<<"]="<<br[i+r-1][j+c-1]<<" br["<<i+r-1<<"]["<<c-1<<"]="<<br[i+r-1][c-1]<<endl;
                      }
                      else if(j==0)
                      {
                          sum=br[i+r-1][j+c-1]-br[i-1][j+c-1];
//                          cout<<"i="<<i<<" j="<<j<<" sum="<<sum<<endl;
//                          cout<<"br["<<i+r-1<<"]["<<j+c-1<<"]="<<br[i+r-1][j+c-1]<<" br["<<r-1<<"]["<<j+c-1<<"]="<<br[r-1][j+c-1]<<endl;
                      }
                      else
                      {
                          sum=br[i+r-1][j+c-1]-br[i+r-1][j-1]-br[i-1][j+c-1]+br[i-1][j-1];
//                          cout<<"i="<<i<<" j="<<j<<" sum="<<sum<<endl;
//                          cout<<"br["<<i+r-1<<"]["<<j+c-1<<"]="<<br[i+r-1][j+c-1]<<"   br["<<i+r-1<<"]["<<j+c-2<<"]="<<br[i+r-1][j+c-2]<<"  br["<<i+r-2<<"]["<<j+c-1<<"]="<<br[i+r-2][j+c-1]<<" br["<<r-1<<"]["<<c-1<<"]="<<br[r-1][c-1]<<endl;
                      }
                      //cout<<"sum="<<sum<<endl;
                      if(sum<=k)
                      {
                          //cout<<"r="<<r<<" c="<<c<<endl;
                           if(mk<=r*c)
                           {
                               mk=r*c;
                               pk=sum;
                           }
                           //mk=max(mk,(r*c));
                      }
                      sum=0;
                   }
               }
              // cout<<endl;
           }
       }
       //cout<<m<<endl;
       cout<<"Case #"<<T<<": ";
       cout<<mk<<" ";
       cout<<pk<<endl;
    }


    return 0;
}
