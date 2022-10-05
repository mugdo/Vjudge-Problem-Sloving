#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+2];
    long long sum=0;
    ar[0]=0;
    ar[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        sum+=abs(ar[i]-ar[i-1]);
    }
    sum+=abs(0-ar[n]);
    //cout<<sum<<endl;
    long long res=0;
    long long res1=0;
    long long tem=sum;
    for(int j=1;j<=n;j++)
    {
        sum=tem;
        res+=abs(ar[j]-ar[j-1])+abs(ar[j+1]-ar[j]);
        //cout<<"abs(ar[j]-ar[j-1])="<<abs(ar[j]-ar[j-1])<<"   abs(ar[j+1]-ar[j])="<<abs(ar[j+1]-ar[j])<<endl;
        res1+=abs(ar[j+1]-ar[j-1]);
        //cout<<"res="<<res<<" res1="<<res1<<endl;
        sum-=res;
        sum+=res1;

        cout<<sum<<endl;
        sum=0;
        res=0;
        res1=0;
    }



    return 0;
}
