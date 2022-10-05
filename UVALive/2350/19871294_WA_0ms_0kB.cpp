#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int ck=0;

   for(int i=2;i<=n/2;i++)
   {
      if(n%i==0)
      {
        ck=1;
        break;

      }
   }
   if(ck==1)
   {
     return false;
   }
   else
   return true;
}
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {

      int flag=0;
      char c;
      if(i!=n-1)
      cin>>flag>>c;
      else
      cin>>flag;
      bool p1,p2;
      p1=prime(flag);
      double x=flag;
      double x1=2.00;
      int rk=pow(x1,x)-1;
      //cout<<rk<<endl;
      p2=prime(rk);
      if(p1==true&&p2==true)
      {
        cout<<"Yes"<<endl;

      }
      else
      {
         cout<<"No"<<endl;
      }
   }


    return 0;
}
