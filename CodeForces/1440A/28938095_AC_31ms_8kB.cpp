#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t; i++)
    {
        int n,c0,c1,h,sum1=0,sum2=0;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='0')
           {
              sum1+=min(c0,h+c1);
           }
           else
           {
              sum1+=min(c1,h+c0);
           }
        }

        cout<<sum1<<endl;

    }
    return 0;
}
