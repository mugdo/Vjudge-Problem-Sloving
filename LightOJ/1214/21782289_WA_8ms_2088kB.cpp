#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        int b;
        cin>>s>>b;
        int ck=0;
        int len=0;
        len=s.size();
        int temp=0;
        int sum=0;
        if(s[0]=='-')
        {
            for(int j=1;j<len;j++)
            {
                sum=temp*10+s[j]-'0';
                temp=sum%b;
            }
        }
        else
        {
            for(int j=0;j<len;j++)
            {
                sum=temp*10+s[j]-'0';
                //cout<<"sum="<<sum<<endl;
                temp=sum%b;
                //cout<<"temp="<<temp<<endl;
            }
        }

        if(temp>0)
        {
            cout<<"Case "<<i+1<<": "<<"not divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<"divisible"<<endl;
        }
    }
    return 0;
}

