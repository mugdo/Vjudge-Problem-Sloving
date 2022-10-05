#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int ar[n];
        int ck1=0;
        int mi;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ck1==0)
            {
                mi=ar[i];
                ck1=1;
            }
           if(mi>ar[i])
           {
               mi=ar[i];
           }
        }
        int p=mi;

        while(p>=0)
        {
            int sum=0;
             //cout<<"p="<<p<<endl;
            int ck=0;
            for(int i=0;i<n;i++)
            {

                if(ar[i]%p==0)
                {
                   sum+=ar[i]/p;
                }
                else
                {
                    ck=1;
                }

            }
            if(ck==0)
            {


              cout<<p<<" "<<sum<<endl;
              break;
            }
            else
            {
              p--;
            }
        }
    }
    return 0;

}
