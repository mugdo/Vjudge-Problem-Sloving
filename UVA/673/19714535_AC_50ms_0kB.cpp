#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {


        string s;
        int flag=0;
        getline(cin,s);
        //cout<<s<<endl;
        stack<char>st;
        int ln=s.size();
        if(ln==0)
        {
           cout<<"Yes"<<endl;
        }
        else
        {
            for(int j=0;j<ln;j++)
            {


              if(s[j]==')')
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
               else
               {
                  //cout<<"push="<<s[j]<<endl;
                  st.push(s[j]);
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
        //cin.ignore();
        //cout<<"ln="<<ln<<endl;

    }

    return 0;
}
