#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c,sum;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum==180)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        sum=0;
        a=0;
        b=0;
        c=0;

    }
    return 0;
}
