
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      string s1,s2;
      cin>>s1>>s2;
      int l1=s1.size();
      int l2=s2.size();
      for(int j=0;j<l1;j++){
      if(s1[j]>=65&&s1[j]<=90)
         s1[j]=s1[j]+32;
       }
      for(int j=0;j<l2;j++){
      if(s2[j]>=65&&s2[j]<=90)
         s2[j]=s2[j]+32;
       }
       int ck=0,ck1=0;
       //cout<<"s1="<<s1<<" s2="<<s2<<endl;
       if(l1==l2)
       {
           for(int g=0;g<l1;g++)
           {
               if(s1[g]=='b')
               {
                   s1[g]='p';
               }
               else if(s1[g]=='i')
               {
                   s1[g]='e';
               }
           }
              for(int g=0;g<l1;g++)
           {
               if(s2[g]=='b')
               {
                   s2[g]='p';
               }
               else if(s2[g]=='i')
               {
                   s2[g]='e';
               }
           }
           for(int f=0;f<l1;f++)
           {
               if(s1[f]!=s2[f])
               {
                 ck=1;
               }
           }
         if(ck==0)
         {
             cout<<"Yes"<<endl;
         }
         else
         {
             cout<<"No"<<endl;
         }

       }
       else
       {
           cout<<"No"<<endl;
       }
    }

    return 0;
}
