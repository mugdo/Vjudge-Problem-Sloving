#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int ar1[n],ar2[n];
   int small=0;
   int big=0;
   int ck=0;
   for(int i=0;i<n;i++)
   {
       cin>>ar1[i]>>ar2[i];
       if(ck==0)
       {
           small=ar1[i];
           big=ar2[i];
           ck=1;
       }
       else
       {
           if(small>ar1[i])
           {
               small=ar1[i];
           }
           if(big<ar2[i])
           {
               big=ar2[i];
           }
       }

   }
  // cout<<"small="<<small<<" big="<<big<<endl;
   int pk=0;
   for(int j=0;j<n;j++)
   {
       if(ar1[j]==small&&ar2[j]==big)
       {
           cout<<j+1<<endl;
           pk=1;
           break;
       }
   }
   if(pk==0)
   {
       cout<<"-1"<<endl;
   }

    return 0;
}

