#include<bits/stdc++.h>
using namespace std;
int ar[1000][1000];
int dp(int i,int j,int n,int k)
{
   int sum=0;
   int mk=0;
   //cout<<"i="<<i<<"  j="<<j<<"  k="<<k<<endl;
   for(int d=j+1;d<=j+k;d++)
   {
       if(d<n&&ar[i][d]>ar[i][j])
       {
          //cout<<"ar[i][j]="<<ar[i][j]<<"  ar[i][d]="<<ar[i][d]<<endl;
          sum=ar[i][d]+dp(i,d,n,k);
          mk=max(sum,mk);
          //cout<<"mk="<<mk<<endl;
       }
   }
   //cout<<"mk="<<mk<<endl;
   for(int d=i+1;d<=i+k;d++)
   {
       if(d<n&&ar[d][j]>ar[i][j])
       {
          sum=ar[d][j]+dp(d,j,n,k);
          mk=max(sum,mk);
       }

   }
   if(i-k>=0)
   {
       for(int d=i-1;d>=i-k;d--)
       {
           if(d>=0&&ar[d][j]>ar[i][j])
           {
             sum=ar[d][j]+dp(d,j,n,k);
             mk=max(sum,mk);
           }

       }
   }

   //cout<<"mk="<<mk<<endl;
   if(j-k>=0)
   {
       for(int d=j-1;d>=j-k;d--)
       {
           if(d>=0&&ar[i][d]>ar[i][j])
           {
              sum=ar[i][d]+dp(i,d,n,k);
              mk=max(sum,mk);
           }

       }

   }

   return mk;

}
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        getline(cin,s);
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>ar[i][k];
            }
        }
        cout<<ar[0][0]+dp(0,0,n,k)<<endl;


    }
    return 0;
}
