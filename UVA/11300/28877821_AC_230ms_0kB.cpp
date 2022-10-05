#include<bits/stdc++.h>
using namespace std;
long long abslate(long long temp)
{
    if(temp<0)
        return temp*(-1);
    else
        return temp;
}
int main()
{
    int n;
    while(cin>>n)
    {
        long long ar[n],sum=0,avg=0,need[n],tr[n],qmmalatibe_sum[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        avg=sum/n;
        for(int i=0;i<n;i++)
        {
            need[i]=avg-ar[i];
        }
        qmmalatibe_sum[n-1]=need[n-1];
        for(int i=n-2;i>=0;i--)
        {
            qmmalatibe_sum[i]=qmmalatibe_sum[i+1]+need[i];
        }
        sort( qmmalatibe_sum, qmmalatibe_sum+n);
        long long res=0,p;
        if(n%2==0)
        {
            long long p=qmmalatibe_sum[(n/2)];
            long long q=qmmalatibe_sum[(n/2)-1];

            tr[0]=(p+q)/2;
        }
        else
             tr[0]=qmmalatibe_sum[(n/2)+1];

//        if(p<0)
//        {
//            p=p*(-1);
//        }
//        else
//            p=p*(-1);

//        tr[0]=p;
        long long me=tr[0];

        for(int i=0;i<n;i++)
        {
            tr[i]=qmmalatibe_sum[i]-me;
            res+=abslate(tr[i]);
        }

        cout<<res<<endl;




    }
    return 0;
}
