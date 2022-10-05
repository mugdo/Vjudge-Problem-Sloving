#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,t=1;

    while(cin>>n>>q)
    {
        if(n==0 && q==0)
            break;

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        int pos[100000],d;
        memset(pos,-1,sizeof(pos));

        for(int i=0;i<n;i++)
        {
            if(pos[a[i]]==-1)
                pos[a[i]]=i+1;
        }
        cout<<"Case# "<<t<<":"<<endl;
        for(int i=1;i<=q;i++)
        {
            cin>>d;

            if(pos[d]==-1)
                cout<<d<<" not found"<<endl;
            else
                cout<<d<<" found at "<<pos[d]<<endl;
        }
        t++;
    }

    return 0;
}
