#include<bits/stdc++.h>
using namespace std;

int ar[1000][1000];
int br[1000][1000]= {-1};

int dp(int i,int j,int n,int k)
{
    if(br[i][j]!=-1)
        return br[i][j];

    int sum=0;
    int mk=0,ck=0;
    //cout<<"i="<<i<<"  j="<<j<<"  k="<<k<<endl;
    for(int d=j+1; d<=j+k; d++)
    {
        if(d<n&&ar[i][d]>ar[i][j])
        {
            //cout<<"ar[i][j]="<<ar[i][j]<<"  ar[i][d]="<<ar[i][d]<<endl;

            ck=dp(i,d,n,k);
            sum=ar[i][d]+ck;

            mk=max(sum,mk);

            //cout<<"mk="<<mk<<endl;
        }
    }
    //cout<<"mk="<<mk<<endl;
    for(int d=i+1; d<=i+k; d++)
    {
        if(d<n&&ar[d][j]>ar[i][j])
        {
            ck=dp(d,j,n,k);
            sum=ar[d][j]+ck;

            mk=max(sum,mk);
        }
    }
    for(int d=i-1; d>=i-k; d--)
    {
        if(d>=0&&ar[d][j]>ar[i][j])
        {
            ck=dp(d,j,n,k);
            sum=ar[d][j]+ck;

            mk=max(sum,mk);
        }
    }
    for(int d=j-1; d>=j-k; d--)
    {
        if(d>=0&&ar[i][d]>ar[i][j])
        {
            ck=dp(i,d,n,k);
            sum=ar[i][d]+ck;

            mk=max(sum,mk);
        }
    }

    return br[i][j]=mk;

}
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            for(int k=0; k<n; k++)
            {
                cin>>ar[i][k];
                br[i][k]=-1;
            }
        }
        cout<<ar[0][0]+dp(0,0,n,k)<<endl;
        cout<<endl;


    }
    return 0;
}
/*
3

3 1
1 2 3
6 5 4
7 8 9
*/
