#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   for(int t=0;t<T;t++)
   {
      int n,x;
      cin>>n>>x;
      int ar[n];
      int br[n];
      for(int i=0;i<n;i++)
         cin>>ar[i];
      for(int i=0;i<n;i++)
         cin>>br[i];
      sort(br,br+n);
         int temp=0,ck=0,flag=0;
      for(int i=0;i<n;i++)
      {
         if(ar[i]<x)
         {
            temp=x-ar[i];
            for(int j=n-1;j>=0;j--)
            {
               //cout<<"br[j]="<<br[j]<<"  ar[i]="<<ar[i]<<endl;

               if(br[j]+ar[i]<=x&&br[j]!=-1)
               {
                  //cout<<"enter.."<<endl;

                  br[j]=-1;
                  ck=1;
                  break;
               }
            }
         }
         else
         {
            flag=1;
         }
         if(ck==0)
         {
            //cout<<"enter.."<<endl;
            flag=1;
            break;
         }
      }
      if(flag==0)
         cout<<"Yes"<<endl;
      else
         cout<<"No"<<endl;
   }

   return 0;
}

