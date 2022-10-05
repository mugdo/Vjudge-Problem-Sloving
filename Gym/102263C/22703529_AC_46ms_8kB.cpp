#include<bits/stdc++.h>
using namespace std;
int capclock=0;

int main()
{

   int n;
   cin>>n;
   string main;
   string w="";
   cin.ignore();
   getline(cin,main);
   //cout<<"main="<<main<<endl;
   int m;
   cin>>m;
   string ss;
   for(int i=0;i<m;i++)
   {
       string comand;
       cin>>comand;
       if(comand=="CapsLock")
       {
           if(capclock==0)
           {
               capclock=1;
           }
           else
           {
               capclock=0;
           }
           i++;
           char sp;
           cin>>sp;
           if(capclock==0)
           {
                if(sp>='A' && sp<='Z')
               {
                  sp = sp + 32;
               }
           }
           else
           {
              if(sp>='a' && sp<='z')
               {
                  sp = sp - 32;
               }
           }
           ss+=sp;

       }
       else if(comand=="Backspace")
       {
           string temp="";
           if(ss.size()!=0)
           {
               temp=ss.substr(0,ss.size()-1);
               ss=temp;
           }

       }
       else if(comand=="Space")
       {
           ss+=" ";
       }
       else
       {
           char sp;
           sp=comand[0];
           if(capclock==0)
           {
                if(sp>='A' && sp<='Z')
               {
                  sp = sp + 32;
               }
           }
           else
           {
              if(sp>='a' && sp<='z')
               {
                  sp = sp - 32;
               }
           }
           ss+=sp;
       }
       //cout<<"ss="<<ss<<endl;
   }
   int ck=0;
   
     if(main.size()==ss.size())
     {
        for(int i=0;i<ss.size();i++)
        {
            //      cout<<"main[i]="<<main[i]<<"   ss[i]="<<ss[i]<<endl;
            if(main[i]!=ss[i])
            {
                   ck=1;

            }
        }
     }
     else
     {
         ck=1;
     }

   if(ck==0)
   {
       cout<<"Correct"<<endl;
   }
   else
   {
       cout<<"Incorrect"<<endl;
   }




   return 0;
}
