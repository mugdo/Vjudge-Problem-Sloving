#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        long long ar[n];
        memset(ar,0,sizeof(n));
        long long  tem[100010];
        memset(tem,0,sizeof(tem));

        long long  mk=0;
        for(long long  j=0;j<n;j++)
        {
            cin>>ar[j];
            tem[ar[j]]+=1;
            if(mk<ar[j])
            {
                mk=ar[j];
            }

        }


        int ck=0;

       long long mn=0;
       long long sum=0;


         for(int p=1;p<=mk;p++)
         {

             if(tem[p]>1)
             {
                 long long ss=0;
                 ss=tem[p];
                 sum=0;
                 sum=(ss*(ss-1))/2;
                 mn+=sum;
                 ck=1;
             }

         }
         if(ck==1)
         {
            long long d=0;
            d=((n*(n-1))/2)-mn;
           //cout<<"MN= "<<mn<<"d= "<<d<<endl;
            d+=1;
            cout<<d<<endl;
         }

       else
       {
           long long  d=0;
           d=(n*(n-1))/2;
           cout<<d<<endl;
       }

    }
    return 0;
}
