#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        int len=s.size();
        stack<char>st;
        st.push(s[0]);
        //cout<<st.top()<<endl;
        map<char,int>mp;
        int ck=0;
        for(int i=1;i<len;i++)
        {
            char tp=st.top();
            st.push(s[i]);
            if(tp==st.top())
            {
                mp[tp]+=1;
                ck++;
                st.pop();
                char ta=st.top();
                st.pop();

                if(!st.empty())
                {
                    mp[st.top()]+=1;
                    ck++;
                }
                else
                {
                   mp[ta]-=1;
                }

            }


        }
        //cout<<ck<<endl;qqqqqqq///
        cout<<"Case "<<j+1<<endl;
        for(char k='A';k<='Z';++k)
        {
            if(mp[k]!=0)
            cout<<k<<"="<<mp[k]<<endl;
        }
    }
    return 0;
}
