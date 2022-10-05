#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n;
       cin>>n;
       string s1,s2;
       cin>>s1>>s2;
       string s3="";
       string s4="";

       for(int j=0;j<n;j++)
       {
          if(s1[j]!=s2[j])
          {
              s3+=s1[j];
              s4+=s2[j];
          }
       }
       int ck=0;
       if(s3.size()!=0)
       {
           if(s3[0]!=s4[s4.size()-1])
           {
               ck=1;
           }
           for(int j=0;j<s3.size()-1;j++)
           {
               if(s4[j]!=s3[j+1])
               {
                   ck=1;
                   break;
               }
           }
       }
       else
       {
           ck=0;
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
