#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,r;
        cin>>n>>r;
        long long sum=0;
        int p;
        for(int j=0;j<n;j++)
        {
            cin>>p;
            sum+=p;
        }
        int ck=0;
        ck=r-sum;
        if(ck==1500)
        {
            cout<<"Correct"<<endl;
        }
        else
        {
            cout<<"Bug"<<endl;
        }
    }
    return 0;
}
