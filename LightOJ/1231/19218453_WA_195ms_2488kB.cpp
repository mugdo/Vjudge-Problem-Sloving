#include<bits/stdc++.h>
using namespace std;
int con=0;
long long dp[51][1010];
int coin(int a[],int c[],int pos,int k,int n)
{
    int sum;
    int temp;
    if(k==0)
    {
        return 1;

    }
    if(pos==n)
    {
       if(k==0)
        {
        return 1;

        }
        else
            return 0;
    }
    if(dp[pos][k]!=-1)
    {
        return dp[pos][k];
    }
    sum=0;
    for(int i=1;i<=c[pos];i++)
    {
        sum+=coin(a,c,pos+1,k-(a[pos]*i),n)%100000007;


    }
    sum+=coin(a,c,pos+1,k,n)%100000007;
    return dp[pos][k]=sum%100000007;




}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        memset(dp,-1,sizeof(dp));
        int n,k;
        cin>>n>>k;
        int a[n];
        int c[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
         cout<<"Case "<<t<<": "<<coin(a,c,0,k,n)<<endl;

    }



    return 0;
}
