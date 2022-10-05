#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
   }
   int ck=0;
   for(int i=0;i<n-1;i++)
   {
       if(ar[i]==2&&ar[i+1]==3)
       {
           ck=1;
       }
       else if(ar[i]==ar[i+1])
       {
           ck=1;
       }
   }
   if(ck==1)
   {
       cout<<"Infinite"<<endl;
   }
   else

   {
       cout<<"Finite"<<endl;
   }
    return 0;
}
