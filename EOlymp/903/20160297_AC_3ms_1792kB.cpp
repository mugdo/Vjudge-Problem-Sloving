#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ar[10];
    int len=0;
    cin>>ar;
    int p1=0,p2=0;
    p1=ar[0]-'0';
    p2=ar[2]-'0';
    //cout<<p1<<p2<<endl;
    if(p1==p2)
    {
        cout<<"="<<endl;
    }
    else if(p1>p2)
    {
        cout<<p1<<endl;
    }
    else
    {
        cout<<p2<<endl;
    }
    return 0;
}

