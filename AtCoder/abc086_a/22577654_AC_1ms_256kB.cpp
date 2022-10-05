#include<bits/stdc++.h>
using namespace std;
int main()
{

   int a,b;
   while(cin>>a>>b)
   {
       long long sum=0;
       sum=a*b;
       if(sum%2==0)
       {
           cout<<"Even"<<endl;
       }
       else
       {
           cout<<"Odd"<<endl;
       }
   }

   return 0;
}
