#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[30],x;
    memset(a,0,sizeof(a));

    string sr[30];

    string s,extra;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        getline(cin,extra);
        //cout<<s[0]<<'$'<<s[s.size()-1]<<endl;
        x=s[0]-64;
        a[x]++;

        sr[x]=s;
    }

    for(int i=1;i<=26;i++)
    {
        if(a[i]!=0)
        {
            cout<<sr[i]<<' '<<a[i]<<endl;
        }
    }
    return 0;
}
