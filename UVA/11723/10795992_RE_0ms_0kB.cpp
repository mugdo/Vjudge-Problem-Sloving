#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=1;
    float x,r,n;

    while(cin>>r>>n)
    {
        if(r==0 && n==0)
            return 1;

        if(r>(n*26)+n)
            cout<<"Case "<<count<<": impossible"<<endl;

        else
        {
            x=r/n;

            cout<<"Case "<<count<<": "<<(ceil(x))-1<<endl;
        }

        count++;
    }

    return 0;
}
