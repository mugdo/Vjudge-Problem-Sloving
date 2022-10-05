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
        //cout<<"damage="<<damage<<endl;
        sum=0;
        sum+=a-damage;
        sum+=b-damage;
        sum+=c-damage;
        //cout<<sum<<endl;
        if(damage>a||damage>b||damage>c)
          cout<<"NO"<<endl;
        else if(sum==((damage*7)-damage))
        {
            cout<<"YES"<<endl;

        }
        else
         cout<<"NO"<<endl;
        //cout<<"damage="<<damage<<endl;



    }
    return 0;
}

