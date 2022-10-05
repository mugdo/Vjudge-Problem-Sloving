#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   while(cin>>a>>b>>c)
   {
       if(abs(a-b)==abs(b-c)) cout<<"YES"<<endl;
       else  cout<<"NO"<<endl;

   }


   return 0;
}
