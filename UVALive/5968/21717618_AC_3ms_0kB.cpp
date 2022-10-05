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
        int len=0;
        len=s.size();
        int con1=0,con2=0;
        for(int j=0;j<len-1;j++)
        {
            if(s[j]=='S'&&s[j+1]=='S')
            {
                con1++;
            }
            if(s[j]=='S'&&s[j+1]!='S')
            {
                con2++;
            }
        }
        cout<<"Case "<<i+1<<": "<<con1<<" / "<<con2<<endl;
    }
    return 0;
}
