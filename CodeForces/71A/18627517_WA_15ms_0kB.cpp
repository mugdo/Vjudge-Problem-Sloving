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
        if(si<10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<si-2<<s[si-1]<<endl;
        }


    }
    return 0;
}
