#include<bits/stdc++.h>>
using namespace std;
int main()
{
    int w,n;
    while(cin>>w>>n)
    {
        long long sum=0;
        int a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            sum+=a*b;
        }
        cout<<sum/w<<endl;
    }
    return 0;
    
}
