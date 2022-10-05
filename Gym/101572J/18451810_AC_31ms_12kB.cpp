#include<bits/stdc++.h>
using namespace std;
int main()
{
   int l,r;
   while(cin>>l>>r)
   {
       if(l==0&&r==0)
       {
           cout<<"Not a moose"<<endl;
       }
       else if(l==r)
       {
           cout<<"Even "<<r*2<<endl;
       }
       else if(l!=r)
       {
           cout<<"Odd "<<max(r,l)*2<<endl;
       }
   }
    return 0;
}
