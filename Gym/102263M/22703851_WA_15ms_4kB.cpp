#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   string ne="",nw="";
   for(int i=0;i<s.size();i++)
   {

       if(s[i]==s[i+1]&&s[i]!='z')
       {
           ne="",nw="";
           //cout<<"s[i]="<<s[i]<<endl;
           s[i]=s[i]+1;
           //cout<<"s[i]="<<s[i]<<endl;
           ne=s.substr(0,i+1);
           //cout<<"ne="<<ne<<endl;
           if(i+2<=s.size())
           {
               nw=s.substr(i+2,s.size());
               //cout<<"nw="<<nw<<endl;
               s="";
               s=ne+nw;

           }
           else
           {
               s="";
               s=ne;
           }

       }
   }
   sort(s.begin(),s.end());
   for(int i=s.size()-1;i>=0;i--)
   {
       cout<<s[i];
   }
   cout<<endl;


   return 0;
}
