#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a;
    for(int i=0;i<t;i++)
    {
       cin>>a;
       if(a%3==0||a%5==0)
       {
           cout<<"Balanced"<<endl;
       }
       else
       {
           cout<<"Bad"<<endl;
       }
    }
    return 0;
}
