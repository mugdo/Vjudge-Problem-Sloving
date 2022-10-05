#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum=0;
    int n;
    while(cin>>n)
    {
         int b;
         for(int i=0;i<n;i++)
         {
           cin>>b;
           sum+=b;
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
