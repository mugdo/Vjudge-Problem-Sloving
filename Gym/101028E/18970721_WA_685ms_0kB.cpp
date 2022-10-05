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
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int p=ar[0];

        while(p>=0)
        {
             //cout<<"p="<<p<<endl;
            int ck=0;
            for(int i=0;i<n;i++)
            {

                if(ar[i]%p==0)
                {

                }
                else
                {
                    ck=1;
                }

            }
            if(ck==0)
            {
              int sum=0;
              for(int i=0;i<n;i++)
              {
                  sum+=ar[i]/p;
              }
              cout<<p<<" "<<sum<<endl;
              break;
            }
            else
            {
                if(p%2==0)
                {
                    p=p/2;
                }
                else
                {
                  p--;
                }

            }
        }
    }
    return 0;

}
