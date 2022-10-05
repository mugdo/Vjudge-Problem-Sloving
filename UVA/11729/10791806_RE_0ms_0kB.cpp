#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int b[n],j[n],sum=0,count=1;

        if(n==0)
                return 1;

        for(int i=0;i<n;i++)
        {
            cin>>b[i]>>j[i];

            sum=sum+b[i];
        }
        sort(j,j+n);

        sum=sum+j[0];

        cout<<"Case "<<count<<": "<<sum<<endl;

        count++;
    }

    return 0;
}


