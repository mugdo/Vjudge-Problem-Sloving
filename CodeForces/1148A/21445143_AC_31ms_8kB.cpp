#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    long long sum=0;
    cin>>a>>b>>c;
    if(a==b)
    {
        sum+=a+b+(c+c);
        cout<<sum<<endl;
    }
    else
    {
        sum+=c+c;
        sum++;
        sum+=min(a,b)*2;
        cout<<sum<<endl;
    }
    return 0;
}
