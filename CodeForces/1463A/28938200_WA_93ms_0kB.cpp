#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t; i++)
    {
        int a,b,c,sum;
        cin>>a>>b>>c;
        sum=a+b+c;
        int damage=sum/7;
        sum-=damage;
        sum--;
        if(sum%7==0)
        {
           cout<<"YES"<<endl;
        }
        else
         cout<<"NO"<<endl;
        //cout<<"damage="<<damage<<endl;



    }
    return 0;
}

