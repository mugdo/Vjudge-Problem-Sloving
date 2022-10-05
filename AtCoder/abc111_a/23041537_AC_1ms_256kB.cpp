#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        string ss="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='9')
            {
               ss+="1";
            }
            else
            {
                ss+="9";
            }

        }
        cout<<ss<<endl;
    }
    return 0;
}
