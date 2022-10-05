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
       int ck=0;
       for(int k=0;k<l1;k++)
       {
           
           if(s1[k]!=s2[k])
           {
               if(((s1[k]=='p'&&s2[k]=='b')||(s2[k]=='p'&&s1[k]=='b'))||(s1[k]=='i'&&s2[k]=='e')||(s2[k]=='e'&&s1[k]=='i'))
               {

               }
               else
               {
                   ck=1;

               }
           }
       }
       if(ck==1)
       {
           cout<<"No"<<endl;
       }
       else if(l1!=l2)
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
