#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    cout<<"len="<<len<<endl;
    string s1;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='/')
        {
            s1+="/";
            for(int j=i+1;j<len;j++)
            {
                if(s[j]=='/')
                {
                    i++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            s1+=s[i];
        }
    }
    cout<<s1<<endl;

    return 0;
}
