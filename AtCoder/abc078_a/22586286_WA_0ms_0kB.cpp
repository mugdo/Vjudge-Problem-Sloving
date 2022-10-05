#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    mp['A']=10;
    mp['B']=11;
    mp['C']=12;
    mp['D']=13;
    mp['E']=14;
    mp['F']=15;
    char x,y;
    while(cin>>x>>y)
    {
        if(mp[x]<mp[y])
        {
            cout<<"<"<<endl;
            cout<<mp[x]<<"<"<<mp[y]<<"."<<endl;
        }
        else if(mp[x]>mp[y])
        {
            cout<<">"<<endl;
            cout<<mp[x]<<">"<<mp[y]<<"."<<endl;

        }
        else
        {
            cout<<"="<<endl;
            cout<<mp[x]<<"="<<mp[y]<<"."<<endl;
        }
    }

}

