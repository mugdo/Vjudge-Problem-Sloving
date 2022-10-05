#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(s=="Bob")
        {
            if(n%3==0)
            {
                cout<<"Case"<<" "<<i<<":"<<" "<<"Alice"<<endl;
            }
            else
                cout<<"Case"<<" "<<i<<":"<<" "<<"Bob"<<endl;
        }
        if(s=="Alice")
        {
            if(n%(3*n-2)==0)
            {
                cout<<"Case"<<" "<<i<<":"<<" "<<"Bob"<<endl;
            }
            else
            {
                cout<<"Case"<<" "<<i<<":"<<" "<<"Alice"<<endl;
            }
        }
    }
    return 0;
}
