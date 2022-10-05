#include<bits/stdc++.h>
using namespace std;

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
           i++;
           char sp;
           cin>>sp;
           if(sp>='a' && sp<='z')
           {
              sp = sp - 32;
           }
           else
           {
               sp=sp+32;
           }
           ss+=sp;

       }
       else if(comand=="Backspace")
       {
           string temp;
           temp=ss.substr(0,ss.size()-1);
           ss=temp;
       }
       else if(comand=="Space")
       {
           ss+=" ";
       }
       else
       {
           ss+=comand;
       }
       //cout<<"ss="<<ss<<endl;
   }
   int ck=0;
     //cout<<"size="<<endl;
    // cout<<main.size()<<endl;
     //cout<<ss.size()<<endl;
     if(main.size()==ss.size())
     {
        for(int i=0;i<ss.size();i++)
        {
            //cout<<"main[i]="<<main[i]<<"   ss[i]="<<ss[i]<<endl;
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
