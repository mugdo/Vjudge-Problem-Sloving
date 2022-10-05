#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t; i++)
    {
        int n,c0,c1,h,sum=0;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        if(c1>c0&&h<c1)
        {
            for(int j=0; j<n; j++)
            {
                if(s[j]=='1')
                {
                   s[j]='0';
                   sum+=h;
                }

            }
        }
        if(c1<c0&&h<c0)
        {
            for(int j=0; j<n; j++)
            {
                if(s[j]=='0')
                {
                    s[j]='1';
                    sum+=h;
                }

            }
        }
        for(int j=0;j<n;j++)
        {
           if(s[j]=='0')
             sum+=c0;
           else
            sum+=c1;

        }
        cout<<sum<<endl;

    }
    return 0;
}
