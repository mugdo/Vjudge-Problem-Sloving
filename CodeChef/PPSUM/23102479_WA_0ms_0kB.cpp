#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int sum=0,con=0;
        sum=a*b;
        for(int j=1;j<=sum;j++)
        {
           con+=j;
        }
        cout<<con<<endl;

    }
    return 0;
}
