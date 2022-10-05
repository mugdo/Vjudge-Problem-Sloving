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
        sum+=b-1;
        sum+=c-1;
        sum++;
        if(sum%7==0)
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;

    }
    return 0;
}

