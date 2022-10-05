#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        char s[1000];
        cin>>s;
        stack<char>st;
        int ln=strlen(s);
        //cout<<"ln="<<ln<<endl;
        for(int j=0;j<ln;j++)
        {
           //cout<<"j="<<j<<endl;
         // cout<<"s[j]="<<s[j]<<endl;

           if(s[j]=='(')
           {
              st.push(s[j]);


           }
           else   if(s[j]=='[')
           {
              st.push(s[j]);

           }
           else  if(s[j]==')')
           {
              if((j-1)>=0&&s[j-1]=='(')
                  st.top();
                   st.pop();
           }
           else if(s[j]==']')
           {
              if((j-1)>=0&&s[j-1]=='[')
                 st.top();
                 st.pop();
           }

        }
        if(!st.empty())
        {
           cout<<"No"<<endl;
        }
        else

        {
           cout<<"Yes"<<endl;
        }
        //cout<<"i="<<i<<endl;
    }

    return 0;
}
