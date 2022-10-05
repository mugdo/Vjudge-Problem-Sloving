#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m)
{

    if(n%m==0)
    {
        return m;
    }
    return gcd(m,n%m);
}
int main()
{
    int t;
    cin>>t;
    string temp;
    getline(cin,temp);
    for(int i=0;i<t;i++)
    {
        string s;
        int ar[1010];
        getline(cin,s);
        istringstream is(s);
        int flag=0;
        int mk=0;
        while(is>>ar[flag])
        {
            ++flag;
        }
        for(int j=0;j<flag-1;j++)
        {
            for(int k=j+1;k<flag;k++)
            {
               // cout<<"ar[j]="<<ar[j]<<" ar[k]="<<ar[k]<<endl;

                int g=gcd(ar[j],ar[k]);
                //cout<<"g="<<g<<endl;
                mk=max(mk,g);
            }

        }
        cout<<mk<<endl;
    }
    return 0;
}
