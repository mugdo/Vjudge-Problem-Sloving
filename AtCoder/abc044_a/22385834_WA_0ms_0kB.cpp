#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y;
    while(cin>>n>>k>>x>>y)
    {
        long long sum=0;
        int temp=0;
        temp=n-k;
        sum+=k*x;
        sum+=temp*y;
        cout<<sum<<endl;

    }
    return 0;
}
