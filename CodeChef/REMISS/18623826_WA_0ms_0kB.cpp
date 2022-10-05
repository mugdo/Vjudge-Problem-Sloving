#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        long long a,b,sum;
        cin>>a>>b;
        sum=a+b;
        cout<<min(a,b)<<" "<<sum<<endl;


    }
    return 0;
}
