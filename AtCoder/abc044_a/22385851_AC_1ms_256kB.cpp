#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y;
    while(cin>>n>>k>>x>>y)
    {
        unsigned long long sum=0;
        int temp=0;

        if(k<=n)
        {
          sum+=k*x;
          temp=n-k;
          sum+=temp*y;
        }
        else
        {
            sum+=n*x;
        }


        cout<<sum<<endl;

    }
    return 0;
}
