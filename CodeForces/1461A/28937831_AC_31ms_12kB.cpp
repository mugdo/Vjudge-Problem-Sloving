#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
      int n,k;
      cin>>n>>k;
      string s="";
      string p="bca";
      int flag=0;
      for(int j=0;j<k;j++)
         s+='a';
      for(int j=k;j<n;j++)
      {
         s+=p[flag];
         flag++;
         flag=flag%3;
      }
      cout<<s<<endl;



   }
}


