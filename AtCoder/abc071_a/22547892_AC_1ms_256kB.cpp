#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,a,b;
   while(cin>>x>>a>>b)
   {
       if(abs(x-a)<abs(x-b))
       {
           cout<<"A"<<endl;
       }
       else
       {
           cout<<"B"<<endl;
       }
   }


   return 0;
}
