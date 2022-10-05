#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1;

    while(cin>>n)
    {
        int b,j[n],sum=0;
        memset(j,0,n);

        if(n==0)
                return 1;

        for(int i=0;i<n;i++)
        {
            cin>>b>>j[i];

            sum=sum+b;
        }
        sort(j,j+n);

        sum=sum+j[0];

        cout<<"Case "<<count<<": "<<sum<<endl;

        count++;
    }

    return 0;
}
