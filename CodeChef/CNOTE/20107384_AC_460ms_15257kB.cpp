#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int temp=x-y;
        int a,b;
        int ck=0;
        for(int j=0;j<n;j++)
        {
            cin>>a>>b;
            if(a>=temp&&b<=k)
            {
                ck=1;
            }
        }
        if(ck==1)
        {
            cout<<"LuckyChef"<<endl;
        }
        else
        {
            cout<<"UnluckyChef"<<endl;
        }
    }

    return 0;
}

