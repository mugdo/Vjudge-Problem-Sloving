#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int T=1;T<=t;T++)
    {
        int n=0;
        int q=0;
        cin>>n>>q;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        cout<<"Case "<<T<<":"<<endl;
        for(int j=0;j<q;j++)
        {
            //cout<<"j="<<j<<endl;
            int a=0,b=0;
            cin>>a>>b;
            int mn=0;
            int ck=0;

            for(int k=a;k<=b;k++)
            {
                //cout<<"a="<<a<<" b="<<b<<endl;
                for(int p=k+1;p<=b;p++)
                {
                    //cout<<"ar[k]="<<ar[k]<<" ar[p]="<<ar[p]<<endl;
                    int sum=0;
                    sum=abs(ar[k]-ar[p]);
                    //cout<<"sum="<<sum<<endl;
                    if(ck==0)
                    {
                        mn=sum;
                        ck=1;
                    }

                    if(mn>=sum)
                    {
                        mn=sum;
                    }
                }

            }
            cout<<mn<<endl;
        }
    }
    return 0;
}