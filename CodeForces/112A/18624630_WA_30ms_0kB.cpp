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
    int flag=0;
    for(int i=0;i<si;i++)
    {
        flag+=p[i]-q[i];
    }
    if(flag==0)
    {
        cout<<"0"<<endl;
    }
    else if(flag<0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }




    return 0;
}
