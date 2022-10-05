#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
       

        map<int ,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
            mp[a[i]]+=1;
            //cout<<mp[a[i]]<<endl;

        }
        long long flag=0;
        for(int i=0;i<n;i++)
        {
            flag+=mp[b[i]];
        }

        cout<<flag<<endl;
    }

    return 0;
}