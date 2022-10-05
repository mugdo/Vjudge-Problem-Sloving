#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int ck1=0,ck2=n;
        int r=2;
        int pk=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==r)
            {
                ck1=i;
                //cout<<"r="<<r<<" ck2="<<ck2<<" ck1="<<ck1<<endl;

                for(int j=ck2-1;j>=0;j--)
                {
                    if((ar[j]==(r-1))&&(ck1<ck2))
                    {
                        ck2=j;
                        r++;
                        break;
                    }
                    if(ck2<=ck1)
                    {
                        pk=1;
                        break;
                    }
                }


            }
            if(pk==1)
            {

                break;
            }
        }
        r--;
       // cout<<"r="<<r<<endl;
        if(r==2)
        {
            cout<<"Case "<<t<<": "<<r-1<<endl;
        }
        else
        {
            cout<<"Case "<<t<<": "<<(r*2)-1<<endl;
        }
    }
    return 0;
}
