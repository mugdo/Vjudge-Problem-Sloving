#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int ar[n+1];
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            a[ar[i]]=i;


        }
        int ck=1;
        for(int i=1;i<=n;i++)
        {
            if(ar[i]!=a[i])
            {
                ck=0;
            }
        }
        if(ck==0)
        {
            cout<<"not ambiguous"<<endl;
        }
        else
        {
            cout<<"ambiguous"<<endl;
        }
    }

    return 0;
}
