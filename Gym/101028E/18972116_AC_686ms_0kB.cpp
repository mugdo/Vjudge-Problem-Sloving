#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int T=0;T<t;T++)
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
       // cout<<"p="<<p<<endl;
        int a[1000];
        int h=0;
        for (int j=1;j<=p;j++)
        {
            //cout<<"j="<<j<<endl;
            if (p%j==0)
            {
                a[h]=j;
                //cout<<"divisor="<<j<<endl;
                h++;
            }
        }
        int br[h];
        int d=0;
        for(int j=h-1;j>=0;j--)
        {
            br[d]=a[j];
            //cout<<"br[d]="<<br[d]<<endl;
            d++;
        }


        int pk=0;

        for(int s=0;s<h;s++)
        {
            int sum=0;
             //cout<<"p="<<p<<endl;
            int ck=0;
            for(int i=0;i<n;i++)
            {
                //cout<<"br[s]="<<br[s]<<endl;
                if(ar[i]%br[s]==0)
                {
                   sum+=ar[i]/br[s];
                }
                else
                {
                    ck=1;
                }

            }
            if(ck==0)
            {


              cout<<br[s]<<" "<<sum<<endl;


              break;
            }


        }


    }
    return 0;

}
