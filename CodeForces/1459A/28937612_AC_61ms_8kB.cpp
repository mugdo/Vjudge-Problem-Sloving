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
      int con1=0,con2=0;
      //sort(s1.begin(),s1.end());
      //sort(s2.begin(),s2.end());

      for(int j=0;j<n;j++)
      {
         if(s1[j]>s2[j])
            con1++;
         else if(s2[j]>s1[j])
            con2++;
      }

      if(con1>con2)
         cout<<"RED"<<endl;
      else if(con2>con1)
         cout<<"BLUE"<<endl;
      else
         cout<<"EQUAL"<<endl;
   }
   return 0;
}
