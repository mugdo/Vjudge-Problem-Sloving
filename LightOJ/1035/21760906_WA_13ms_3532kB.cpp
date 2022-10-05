#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int ar[100005];
int br[100005];
int main()
{
    memset(ar,0,sizeof(ar));
    for(int i=2;i<=100000;i++)
    {
        if(ar[i]!=1)
        {
            ar[i]=0;
            for(int j=i*2;j<=100000;j=j+i)
            {
                ar[j]=1;
            }
        }
    }
   int n;
   int t;
   cin>>t;
   for(int j=0;j<t;j++)
   {
       cin>>n;
       memset(br,0,sizeof(br));
       int cr[100010];
       int dr[100010];
       memset(cr,0,sizeof(cr));
       memset(dr,0,sizeof(dr));
       for(int i=2;i<=n;i++)
           {
              if(ar[i]==0)
              {
                  br[i]+=n/i;
                  int j=0;
                  j=i*i;
                  while(j<=n)
                  {
                      br[i]+=n/j;
                      j*=i;
                  }

               }
           }
           cout<<"Case "<<j+1<<": "<<n<<" =";
           int flag=0;
           for(int k=2;k<=n;k++)
           {
               if(ar[k]==0)
               {

                 cr[flag]=k;
                 dr[flag]=br[k];
                 flag++;

               }

           }
           for(int k=0;k<flag;k++)
           {

                if(k<flag-1)
                {
                    cout<<" "<<cr[k]<<" ("<<dr[k]<<")"<<" * ";
                }
                else
                {
                    cout<<" "<<cr[k]<<" ("<<dr[k]<<")";
                }
           }
   }


    return 0;
}
