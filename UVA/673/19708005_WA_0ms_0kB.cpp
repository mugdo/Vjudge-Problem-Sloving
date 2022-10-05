#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        string s;
        int flag=0;
        cin>>s;
        stack<char>st;
        int ln=s.size();
        //cout<<"ln="<<ln<<endl;
        for(int j=0;j<ln;j++)
        {
           //cout<<"j="<<j<<endl;
           //cout<<"s[j]="<<s[j]<<endl;

           if(s[j]=='(')
           {
              //cout<<"push="<<s[j]<<endl;
              st.push(s[j]);
           }
           else  if(s[j]=='[')
           {
              //cout<<"push="<<s[j]<<endl;
              st.push(s[j]);
           }
           else  if(s[j]==')')
           {
              if(st.empty())
              {
                flag=1;
                break;
              }
              else if(st.top()=='(')
              {
                //cout<<"pop="<<st.top()<<endl;
                 st.pop();
              }
           }
         else  if(s[j]==']')
           {
              if(st.empty())
              {
                flag=1;
                break;
              }
              if(st.top()=='[')
              {
                 //cout<<"pop="<<st.top()<<endl;
                 st.pop();

              }

           }
        }
        if(flag==1)
        {
           cout<<"No"<<endl;
        }
        else if(!st.empty())
        {
           cout<<"No"<<endl;
        }
        else

        {
           cout<<"Yes"<<endl;
        }
    }

    return 0;
}
