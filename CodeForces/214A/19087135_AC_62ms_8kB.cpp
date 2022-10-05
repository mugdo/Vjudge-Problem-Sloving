#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
   int ck=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i*i+j==n)
            {
                if(i+j*j==m)
                {
                    ck++;
                }
            }
        }
    }

    cout<<ck<<endl;

    return 0;
}
