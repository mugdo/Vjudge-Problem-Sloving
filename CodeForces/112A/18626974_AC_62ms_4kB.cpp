#include<bits/stdc++.h>
using namespace std;
string rep(string s)
{
    int si=s.size();
    for(int i=0;i<si;i++)
    {
        if(s[i]>=65 && s[i]<=92)
	    {
		s[i]=s[i]+32;
	    }
    }
    return s;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int si=s1.size();
    string p=rep(s1);
    string q=rep(s2);
    int flag=0,ck=0;
    for(int i=0;i<si;i++)
    {
        if(p[i]>q[i])
        {
            ck=1;
            break;
        }
        else if(p[i]<q[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"-1"<<endl;
    }
    else if(ck==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }




    return 0;
}
