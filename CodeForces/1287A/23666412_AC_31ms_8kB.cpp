#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int con=0;
        int flag=0;
        int ck=0;
        for(int j=0;j<n;j++)
        {
           // cout<<"ck="<<ck<<endl;
            if(s[j]=='P'&&ck==1)
            {
                //cout<<"s[j]="<<s[j]<<endl;
                con++;
                flag=max(con,flag);
            }
            else if(s[j]=='A')
            {
                con=0;
                ck=1;
            }

        }
        cout<<flag<<endl;
    }
    return 0;
}
