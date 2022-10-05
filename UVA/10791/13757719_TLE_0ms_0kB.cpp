#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        long long min=0;
        int ck=0;
        //cout<<n/2<<endl;
        for(long long i=1;i<=(n/2);i++)
        {
            for(long long j=1;j<=(n/2);j++)
            {
                //cout<<"i="<<i<<" j="<<j<<endl;
                if(i*j==n)
                {
                    //cout<<i+j<<endl;
                    if(ck==0)
                    {
                        min=i+j;
                        ck=1;

                    }
                    else if(min>=(i+j))
                    {
                        min=i+j;
                    }

                    //break;
                }
            }
        }
        if(min==0)
        {
            cout<<n+1<<endl;
        }
        else

        cout<<min<<endl;

    }
    return 0;
}
