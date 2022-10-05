#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        long long a1=0,b1=0;
        a1=a*b;
        b1=c*d;
        if(a1>=b1)
        {
            cout<<a1<<endl;
        }
        else
        {
            cout<<b1<<endl;
        }
    }
    return 0;
}
