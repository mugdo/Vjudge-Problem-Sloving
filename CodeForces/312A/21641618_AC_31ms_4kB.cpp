#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ss;
    getline(cin,ss);
    for(int i=0;i<n;i++)
    {

        string s;
        getline(cin,s);
        int len=0;
        len=s.size();
        //cout<<len<<endl;
        int ck1=0;
        int ck2=0;
        if(s[len-1]=='.'&&s[len-2]=='a'&&s[len-3]=='l'&&s[len-4]=='a'&&s[len-5]=='l')
        {
            ck1=1;
        }
        //cout<<"s[0]="<<s[0]<<endl;
         if(s[0]=='m'&&s[1]=='i'&&s[2]=='a'&&s[3]=='o'&&s[4]=='.')
        {
            ck2=1;
        }
        //cout<<"ck1="<<ck1<<"  ck2="<<ck2<<endl;
        if(ck1==1&&ck2==1)
        {
            cout<<"OMG>.< I don't know!"<<endl;
        }
        else if(ck1==1)
        {
            cout<<"Freda's"<<endl;
        }
        else if(ck2==1)
        {
            cout<<"Rainbow's"<<endl;
        }
        else
        {
            cout<<"OMG>.< I don't know!"<<endl;
        }
    }
    return 0;
}
