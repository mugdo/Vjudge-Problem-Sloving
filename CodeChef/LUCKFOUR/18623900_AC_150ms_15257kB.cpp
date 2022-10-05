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
        int si=0;
        si=s.size();
        //cout<<"si="<<si<<endl;
        int flag=0;
        for(int j=0;j<si;j++)
        {
            //cout<<"s[i]="<<s[i]<<endl;
           if(s[j]=='4')
           {
               flag++;
           }
        }
        cout<<flag<<endl;
    }
    return 0;
}
