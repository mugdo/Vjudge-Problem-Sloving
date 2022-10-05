#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long ar[100000];
  for(int i=1;i<=10000;i++)
   {
       ar[i]=i;
   }
   for(int i=2;i<=10000;i++)
   {
       ar[i]+=ar[i-1];
   }
   int p;
   cin>>p;
   for(int i=0;i<p;i++)
   {
       int k,n;
       cin>>k>>n;
       cout<<k<<" "<<ar[n]+n<<endl;
   }


   return 0;
}
