#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int ck=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                ck=1;
                break;

            }
        }
        if(ck==1)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }

    }
    return 0;
}
