#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int len=0;
        len=s.size();
        for(int i=0;i<len;i++)
        {
            if(s[i]==',')
            {
                cout<<" ";
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
   return  0;
}

