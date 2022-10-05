#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1;

    while(cin>>n)
    {
        int b,j,sum=0,x=100001;

        if(n==0)
                return 1;

        for(int i=0;i<n;i++)
        {
            cin>>b>>j;

            sum=sum+b;

            x=min(x,j);
        }

        sum=sum+x;

        cout<<"Case "<<count<<": "<<sum<<endl;

        count++;
    }

    return 0;
}
