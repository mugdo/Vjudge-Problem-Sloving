#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int len2=s2.size();
        len2--;
        int ck=0;
        int len1=0;
        len1=s1.size();

        for(int j=len1-1;j>=0;j--)
        {
            //cout<<"s1["<<j<<"]="<<s1[j]<<" s2["<<len2<<"]="<<s2[len2]<<endl;
            if(s2[len2]=='-'||s1[j]=='-')
            {
               //cout<<"negitive"<<endl;
            }
           else if(s2[len2]=='0'&&s1[j]!='0')
            {
                ck=1;
                break;
            }
            else if(s1[j]=='0'&&s2[len2]=='0')
            {

            }
            else if((s1[j]-'0')%(s2[len2]-'0')!=0)
            {
                ck=1;
                break;
            }
            //cout<<"len2="<<len2<<endl;
            if(len2==0)
            {
                break;
            }
            len2--;
        }
        if(ck==1)
        {
            cout<<"Case "<<i+1<<": "<<"not divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<"divisible"<<endl;
        }
    }
    return 0;
}

