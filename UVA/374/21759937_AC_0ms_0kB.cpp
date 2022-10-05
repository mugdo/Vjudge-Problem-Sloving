#include<bits/stdc++.h>
using namespace std;
int bigmod(int a,int b,int m)
{
    //cout<<"a="<<a<<" b="<<b<<" m="<<m<<endl;
    if(b==0)
    {
       // cout<<"b="<<b<<endl;
       return 1;
    }
    else if(b%2==0)
    {
        //cout<<"sk"<<endl;
        int temp=bigmod(a,b/2,m);
        return (temp*temp)%m;
    }
    else
    {
        //cout<<"sp"<<endl;
       return ((a%m)*bigmod(a,b-1,m)%m)%m;
    }

}
int main()
{
   int p,q,m;
   while(cin>>p>>q>>m)
   {
       cout<<bigmod(p,q,m)<<endl;
   }
    return 0;
}
