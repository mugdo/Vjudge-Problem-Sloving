#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    int br[n][n];
    int mk=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          cin>>ar[i][j];
          br[i][j]=0;
        }
    }
    int sum=0;
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<n;j++)
        {

          sum+=ar[i][j];
          br[i][j]=sum;
         // cout<<"br[i][j]="<<br[i][j]<<endl;
         // mk=max(mk,br[i][j]);
        }
    }
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<1;j++)
        {
          sum2+=ar[i][j];
          br[i][j]=sum2;
         // mk=max(mk,br[i][j]);
        }
    }
    for(int i=1;i<n;i++)
    {
        //cout<<"ss"<<endl;
        for(int j=1;j<n;j++)
        {
          //cout<<"ar[i-1][j]="<<ar[i-1][j]<<"  br[i][j-1]="<<br[i][j-1]<<endl;
          int sm=0;
          sm+=br[i-1][j];
         // cout<<sm<<endl;
          sm+=br[i][j-1];
          //cout<<sm<<endl;
          sm+=ar[i][j];
          //cout<<"br["<<i<<"]["<<j<<"]="<<sm<<endl;
          if(i-1>=0&&j-1>=0)
          {
              sm=sm-br[i-1][j-1];
          }
          br[i][j]=sm;
         // mk=max(mk,br[i][j]);
        }
    }
//    cout<<"matrix***************"<<endl;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<br[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<mk<<endl;
//    int p1,p2;
    int mm=0;

    //cout<<mm<<endl;
  int sm=0;
  int m=0;
  int a,b,c;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           //cout<<"i="<<i<<"  j="<<j<<endl;


           for(int k=i;k<n;k++)
           {
               for(int l=j;l<n;l++)
               {
                   a=0;
                   b=0;
                   c=0;
                    if(i-1>=0)
                    {
                       a=br[i-1][l];
                      // cout<<"i-1"<<i-1<<endl;
                     // cout<<"a="<<a<<endl;
                    }
                     if(j-1>=0)
                     {

                       b=br[k][j-1];
                      //cout<<"b="<<b<<endl;
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
                     m=max(sm,m);
                     sm=0;

               }
           }
          // cout<<endl;
       }
   }
   cout<<m<<endl;

    return 0;
}
/*
5
-2 1 3 5 7
1 3 -2 4 1
-1 9 4 -5 2
-3 7 4 5 6
2 -2 -1 4 6


4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 2
*/