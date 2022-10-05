#include<bits/stdc++.h>
using namespace std;
int ck=0;
int pk=0;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,m;
        cin>>n>>m;
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            int rk=m;
            if(ar[i]<m)
            {

                while(1)
                {
                    ar[i]+=m;
                    ck=1;
                    rk+=m;
                    if(ar[i]>=m)
                    {
                        break;
                    }
                }
            }



            sum+=rk-ar[i];

            rk=0;

            pk+=m*2-ar[i];

        }
        if(ck==1)
        cout<<sum<<endl;
        else
        {
            cout<<pk<<endl;
        }
        pk=0;
        sum=0;
        ck=0;

    }

    return 0;
}
