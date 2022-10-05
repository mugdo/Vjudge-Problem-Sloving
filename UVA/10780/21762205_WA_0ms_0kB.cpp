#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int ar[100000];
int br[100000];
int main()
{
    //freopen("in1.txt","r",stdin);
    //freopen("out1.txt","w",stdout);
    //cout<<"ss";
   memset(ar,0,sizeof(ar));
   int n,m;
   int t;
   cin>>t;
   for(int j=0;j<t;j++)
   {
       cin>>m>>n;
       memset(br,0,sizeof(br));
       int cr[100000];
       int dr[100000];
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
           cout<<"Case "<<j+1<<":"<<endl;
           if(br[m]!=0)
           {
               cout<<br[m]<<endl;
           }
           else
           {
               cout<<"Impossible to divide"<<endl;
           }

   }


    return 0;
}


