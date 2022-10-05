#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   map<char,char>mp;
   mp['A']='2';
   mp['B']='2';
   mp['C']='2';

   mp['D']='3';
   mp['E']='3';
   mp['F']='3';

   mp['G']='4';
   mp['H']='4';
   mp['I']='4';

   mp['J']='5';
   mp['K']='5';
   mp['L']='5';

   mp['M']='6';
   mp['N']='6';
   mp['O']='6';

   mp['P']='7';
   mp['Q']='7';
   mp['R']='7';
   mp['S']='7';

   mp['T']='8';
   mp['U']='8';
   mp['V']='8';

   mp['W']='9';
   mp['X']='9';
   mp['Y']='9';
   mp['Z']='9';

   mp['1']='1';
   mp['2']='2';
   mp['3']='3';
   mp['4']='4';
   mp['5']='5';
   mp['6']='6';
   mp['7']='7';
   mp['8']='8';
   mp['9']='9';



   //cout<<mp['A']<<endl;
   while(cin>>s)
   {
       int len=0;
       len=s.size();
       char ss[1000]="";
       for(int i=0;i<len;i++)
       {
           if(s[i]!='-')
           {
               char p,h;
               p=s[i];
               //cout<<"p="<<p<<endl;
               //cout<<"mp[p]="<<mp[p]<<endl;
               h=mp[p];
               ss[i]=h;
               //cout<<"h="<<h<<endl;
              // cout<<"ss[i]="<<ss[i]<<endl;
           }
           else
            ss[i]=s[i];
       }
       for(int i=0;i<len;i++)
       {
           cout<<ss[i];
       }
       cout<<endl;

   }


   return 0;
}
