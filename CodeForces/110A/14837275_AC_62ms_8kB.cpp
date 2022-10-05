#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int n=0;
   n=s.size();
   int con=0;
   for(int i=0;i<n;i++)
   {
       int k=0;
       k=s[i]-'0';
       if(k==4||k==7)
        con++;

   }
   string ss;
   int j=0;
   //cout<<con<<endl;
   while(con!=0)
   {
       int p=con%10;
       //ss[j]=p+'0';
      // j++;

       con=con/10;
       //cout<<p<<endl;

       if(p==4||p==7)
       {
           j=1;
           //cout<<p<<endl;
       }
   }

   if(j==1)
   {
       cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
}

