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
        string sp="";
        for(int i=si-1;i>=0;i--)
        {
            sp+=s[i];
        }
        int k=sp.size();
        string r="";
        int ck=0;
        for(int j=0;j<k;j++)
        {
            if(sp[j]=='0'&&ck==0)
            {

            }
            else
            {
                r+=sp[j];
                ck=1;
            }
        }
        cout<<r<<endl;





    }

    return 0;
}

