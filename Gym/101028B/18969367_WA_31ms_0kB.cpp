#include<bits/stdc++.h>
using namespace std;
int c(string s)
{
    int si=s.size();
        if(s[0]=='b'&&s[1]=='o'&&s[2]=='n'&&s[3]=='a'&&s[4]=='b'&&s[5]=='e'&&s[6]=='t'&&s[7]=='y')
        {
            return 2;
        }
        else  if(s[0]=='b'&&s[1]=='o'&&s[2]=='n'&&s[3]=='a'&&s[4]=='b'&&s[5]=='i'&&s[6]=='t'&&s[7]=='y')
        {
            return 2;
        }
         else  if(s[0]=='p'&&s[1]=='o'&&s[2]=='n'&&s[3]=='a'&&s[4]=='b'&&s[5]=='e'&&s[6]=='t'&&s[7]=='y')
        {
            return 2;
        }
         else  if(s[0]=='p'&&s[1]=='o'&&s[2]=='n'&&s[3]=='a'&&s[4]=='b'&&s[5]=='i'&&s[6]=='t'&&s[7]=='y')
        {
            return 2;
        }
        else
        {
            return 99;
        }

}
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
           int p=0;
           int q=0;
         p=c(s1);
         q=c(s2);
         if(p==q)
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
