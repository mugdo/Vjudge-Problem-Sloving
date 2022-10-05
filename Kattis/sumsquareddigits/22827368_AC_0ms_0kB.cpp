#include<bits/stdc++.h>
using namespace std;
int main()
{

   int p;
   cin>>p;
   for(int i=0;i<p;i++)
   {
       int k,b,n;
       cin>>k>>b>>n;
       int temp=0;
       temp=n;
       unsigned long long sum=0;
       int r=0;
       while(temp!=0)
       {
           r=temp%b;
           //cout<<"r="<<r<<endl;
           sum+=r*r;
           //cout<<sum<<endl;


           temp=temp/b;
       }
       cout<<k<<" "<<sum<<endl;


   }

   return 0;
}
