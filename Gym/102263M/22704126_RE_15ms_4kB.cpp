#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   string ne="",nw="";
   stack<char>st;
   for(int i=0;i<s.size();i++)
   {
       st.push(s[i]);
   }
   char p=st.top();
   st.pop();
   while(!st.empty())
   {
      // cout<<"st.top()="<<st.top()<<"   p="<<p<<endl;
       if(st.top()==p&&p!='z')
       {
           char temp;
           st.pop();
           temp=st.top();
           p=p+1;
           //cout<<"p="<<p<<endl;
           st.push(p);
           p=temp;

       }
       else
       {
           ne+=p;
           //cout<<"ne="<<ne<<endl;
           p=st.top();
           st.pop();

       }
   }
  sort(ne.begin(),ne.end());
  for(int i=ne.size()-1;i>=0;i--)
  {
      cout<<ne[i];
  }
    cout<<endl;



   return 0;
}
