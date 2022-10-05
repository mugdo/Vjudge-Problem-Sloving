#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    while(cin>>n>>k)
    {
        long long temp,con=0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp%k==0)
            {
                con++;
            }
        }
        cout<<con<<endl;
    }
    return 0;
}
