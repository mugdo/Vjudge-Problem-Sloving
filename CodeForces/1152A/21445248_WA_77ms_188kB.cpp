#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,m;
   cin>>n>>m;
   int ar[n],br[m];
   int odd1=0,odd2=0,even1=0,even2=0;
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
       if(ar[i]%2==0)
       {
           even1++;
       }
       else
       {
           odd1++;
       }
   }
    for(int i=0;i<m;i++)
   {
       cin>>ar[i];
       if(ar[i]%2==0)
       {
           even2++;
       }
       else
       {
           odd2++;
       }
   }
   int sum=0;
   sum+=min(even1,odd2);
   sum+=min(even2,odd1);
   cout<<sum<<endl;

    return 0;
}

