#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long ar[20+10];
    ar[0]=1;
    for(int i=1;i<=20;i++)
    {
        ar[i]=ar[i-1]*i;
    }
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        int br[100];
        long long pk=n;
        cout<<"Case "<<i+1<<": ";
        int ck=0;
        //cout<<"ss"<<endl;
        long long sum=0;
        for(int j=20;j>=0;j--)
        {
            if(ar[j]<=n)
            {

                br[ck]=j;
                n-=ar[j];
                sum+=ar[j];
                ck++;
                //cout<<"j="<<j<<"  sum="<<sum<<endl;
            }
        }
        //cout<<"sp"<<endl;
        int gk=0;
        if(sum==pk)
        {
            for(int k=ck-1;k>=0;k--)
            {
                if(gk<ck-1)
                {
                    //cout<<"sss"<<endl;
                    cout<<br[k]<<"!+";

                }
                else
                  cout<<br[k]<<"!"<<endl;

              gk++;
            }
        }
        else
        {
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
