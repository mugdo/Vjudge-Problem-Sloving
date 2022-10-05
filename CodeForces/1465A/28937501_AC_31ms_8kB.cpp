#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int d;
    for(int i=0;i<t;i++)
    {
        cin>>d;
        cin>>s;
        int flag=0;
        for(int j=s.size()-1;j>=0;j--)
        {
            if(s[j]==')')
                flag++;
            else
                break;
        }
        //cout<<"flag="<<flag<<endl;
        if(flag>(d-flag))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
 
 
    }
    return 0;
}