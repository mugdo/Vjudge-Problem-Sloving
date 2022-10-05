#include<bits/stdc++.h>
using namespace std;
struct stt
{
    char a;
};
bool operator < (stt x,stt y)
{
    if(x.a!=y.a)
    {
        return x.a<y.a;
    }
    else
        return x.a>y.a;
}
int main()
{
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   string ne="",nw="";
   priority_queue<stt>st;
   priority_queue<stt>fine;
   stt obj;
   for(int i=0;i<s.size();i++)
   {
       obj.a=s[i];
       st.push(obj);
   }
   char p=st.top().a;
   st.pop();
   while(!st.empty())
   {
       //cout<<"st.top()="<<st.top().a<<"   p="<<p<<endl;
       if(st.top().a==p&&p!='z')
       {
           char temp;
           st.pop();
           temp=st.top().a;
           p=p+1;
           //cout<<"p="<<p<<endl;

           stt obj2;
           obj2.a=p;
            st.push(obj2);
           p=temp;

       }
       else
       {
           stt obj3;
           obj3.a=p;
           fine.push(obj3);
           //cout<<"ne="<<ne<<endl;
           p=st.top().a;
           st.pop();

       }
   }
  //sort(ne.begin(),ne.end());
  while(!fine.empty())
  {
      ne+=fine.top().a;
      fine.pop();

  }
  cout<<ne<<endl;



   return 0;
}
