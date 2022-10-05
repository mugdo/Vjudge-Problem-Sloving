#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,t;
    cin>>s>>t;
    int con=0;
    if((s+t)%2==0)
    {
        cout<<(s+t)/2;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }

}
