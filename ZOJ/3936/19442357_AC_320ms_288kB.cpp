#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int temp=c;
        c=a;
        a=temp;
        int k=b+d;
        cout<<a<<" "<<k<<endl;
        cout<<c<<" "<<k<<endl;

    }

    return 0;
}