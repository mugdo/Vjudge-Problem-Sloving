#include<bits/stdc++.h>
using namespace std;
int con=0;
int coin(int a[],int c[],int pos,int k,int n)
{
    int sum;
    int temp;
    if(sum==k)
    {
        return 1;

    }
    if(pos==n)
    {
        return 0;
    }
    for(int i=0;i<c[pos];i++)
    {
        sum=coin(a,c,pos+1,k-a[pos],n);
        sum=coin(a,c,pos+1,k,n);

    }
    //sum=coin(a,c,pos+1,k,n);


}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
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
         cout<<coin(a,c,0,k,n)<<endl;

    }



    return 0;
}
