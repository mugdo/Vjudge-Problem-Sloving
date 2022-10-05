#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
long long ph(int a,int b)
{
    int sum=1;
    for(int i=0;i<b;i++)
    {
       sum*=a;
    }
    return sum;
}
int main()
{
   int n,k;
   while(cin>>n>>k)
   {
       if(n==0&&k==0)
       {
           break;
       }
       int ar[10000];
       memset(ar,0,sizeof(ar));
       double g;
       g=(double)n;
       double r;
       r=sqrt(g);
       int p=0;
       p=(int)r;
       for(int i=2;i<=p;i++)
       {
            if(ar[i]!=1)
            {
                ar[i]=0;
                for(int j=i*2;j<=n;j=j+i)
                {
                    ar[j]=1;
                }
            }
       }
       int br[100000];
       int cr[100000];
       int dr[100000];
       memset(br,0,sizeof(br));
       memset(cr,0,sizeof(cr));
       memset(dr,0,sizeof(dr));
       for(int i=2;i<=n;i++)
       {
           if(ar[i]==0)
           {


              br[i]+=n/i;
              //cout<<"br[i]="<<br[i]<<endl;
              if(i<=k)
              {
                  cr[i]+=k/i;

              }
              if(i<=(n-k))
              {
                  dr[i]+=(n-k)/i;
              }
             // cout<<"br[i]="<<br[i]<<endl;
              int j=0;
              j=i*i;
              while(j<=n)
              {
                  br[i]+=n/j;
                  if(j<k)
                  {
                      cr[i]+=k/j;
                  }
                  if(j<(n-k))
                  {
                      dr[i]+=(n-k)/j;
                  }
                    //cout<<"ss br[i]="<<br[i]<<endl;
                  j*=i;
                  //if()
              }

           }
       }

           //cout<<endl;
       if(k>=n-k)
       {
           for(int i=2;i<=n-k;i++)
           {
               if(ar[i]==0)
               {
                   cr[i]+=dr[i];
                   br[i]-=cr[i];
                  // cout<<br[i]<<endl;
               }
           }

       }
       else
       {
            for(int i=2;i<=n-k;i++)
           {
               if(ar[i]==0)
               {
                   dr[i]+=cr[i];
                   br[i]-=dr[i];
                  // cout<<"br[i]="<<br[i]<<endl;
               }
           }
       }
       long long sum=1;
       for(int i=2;i<=n;i++)
       {
           if(ar[i]==0)
           {
               if(br[i]!=0)
               {
                 sum*=ph(i,br[i]);
                 //cout<<"sum="<<i*br[i]<<endl;
               }

           }

       }
       cout<<sum<<endl;

   }
    return 0;
}
