#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=0;
        sum+=a-1;
        //cout<<"s="<<sum<<endl;
        sum+=b-1;
        sum+=c-1;
        //cout<<"sum1="<<sum<<endl;
        if(sum>7)
        {
           sum+=sum/7+1;
        }
        else
         sum+=1;
       // cout<<"sum="<<sum<<endl;
        if(sum%7==0)
        {
          cout<<"YES"<<endl;
        }

        else
         cout<<"NO"<<endl;

    }
    return 0;
}

