#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        int x=0,y=0,z=0;
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;

    }
    if(a==0&&b==0&&c==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
