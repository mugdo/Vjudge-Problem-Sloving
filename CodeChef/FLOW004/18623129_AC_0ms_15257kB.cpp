#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int si=s.size();
        int sum=0;
        sum+=s[0]-'0';
        sum+=s[si-1]-'0';
        cout<<sum<<endl;


    }

    return 0;
}
