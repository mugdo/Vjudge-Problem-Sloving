#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[1010];
    for(int i=0;i<=100;i++)
    {
        ar[i]=i;
    }
    for(int i=1;i<=100;i++)
    {
        ar[i]+=ar[i-1];
    }
    int n;
    while(cin>>n)
    {
        cout<<ar[n]<<endl;
    }

    return 0;
}
