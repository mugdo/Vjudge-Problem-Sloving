#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1,s2;
   while(cin>>s1>>s2)
   {
       int len=0;
       len=s1.size();
       int len2=0;
       len2=s2.size();
       len2--;
       int ck=0;
       for(int i=0;i<len;i++)
       {
          if(s1[i]==s2[len2])
          {
              len2--;
          }
          else
          {
              ck=1;
              break;
          }
       }
       if(ck==1)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
   }


   return 0;
}
