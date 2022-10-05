#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(cin>>n)
    {
        map<string,int>mp;
        map<string,int> :: iterator it;

        string sr[30];

        string s,extra;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            getline(cin,extra);

            mp[s]++;
        }

        for(it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<' '<<it->second<<endl;
        }
    }
    return 0;
}
