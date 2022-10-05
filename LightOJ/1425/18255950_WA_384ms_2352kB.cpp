#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long b=0;
        cin>>b;
        int ar[b];
        for(int k=0;k<b;k++)
        {
            cin>>ar[k];
        }
        long long dif=ar[0];
        long long flag=dif-1;
        long long mx=dif;
        for(long long j=0;j<b-1;j++)
        {
            dif=ar[j+1]-ar[j];
            //cout<<"dif="<<dif<<endl;
            if(flag==dif)
            {
                flag--;
            }
            if(flag<dif)
            {
                //cout<<"mx="<<mx<<endl;
                if(mx<dif)
                {
                     mx=dif;
                     flag=dif-1;
                }
                flag--;


                //cout<<"max="<<mx<<" flag="<<flag<<endl;
            }

        }
        cout<<"Case "<<i<<": "<<mx<<endl;
    }

    return 0;
}
