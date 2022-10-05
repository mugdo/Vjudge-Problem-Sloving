#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int con=0;
        for(int i=k-1;i<n;i++)
        {
            int temp=i-1;
            int pk=k;
            //cout<<endl;
            while(temp>=0)
            {
               // cout<<"s[temp]="<<s[temp]<<" s[i]="<<s[i]<<endl;
                if(s[temp]==s[i])
                {
                   // cout<<"ss"<<endl;
                    con++;
                }
                temp--;
                pk--;
                if(pk==0)
                {
                    break;
                }

            }
        }
        cout<<"Case "<<j+1<<": "<<con<<endl;
    }

    return 0;
}
