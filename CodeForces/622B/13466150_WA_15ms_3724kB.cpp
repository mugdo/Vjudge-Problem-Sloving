#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int a;
    cin>>s;
    cin>>a;
    int k=0;
    k=s.size();
    string ss;
    int r=0;
    ss=s.substr(3,k);
    int l=0;
    l=ss.size();
    int ck=0;
    int rr=0;
    //cout<<ss<<endl;
    for(int i=0;i<l;i++)
        {
            if(ck==0)
            {
                r=ss[i]-'0';
               // cout<<r<<endl;
                ck=1;

            }
            else
            {
                rr=ss[i]-'0';
                r=r*10;
                r+=rr;
                rr=0;
            }


        }
        //cout<<r<<endl;
        int sum=0;
        sum=r+a;
        //cout<<sum<<endl;
        int h=0;
        int ses=0;
        h=sum/60;
        ses=sum%60;
        //cout<<h<<" "<<ses<<endl;
        string d="";
        for(int j=0;j<k;j++)
        {

            if(s[j]!=':')
            {
                d+=s[j];

            }
            if(s[j]==':')
            {
                break;
            }
        }
        //cout<<d<<endl;
        int f=0;
        f=d.size();
        //cout<<f<<endl;
        int m=0;
        int pk=0;
        int n=0;
          for(int i=0;i<f;i++)
        {
            if(pk==0)
            {
                m=d[i]-'0';
                //cout<<m<<endl;
                pk=1;

            }
            else
            {
                m=m*10;
                n=d[i]-'0';
                m+=n;
            }


        }
        //cout<<"M="<<m<<endl;
        int y=0;
        y=m+h;
        //cout<<y<<endl;
        int cc=0;
        int mai=0;
        if(y>=24)
        {
            mai=0;
            cc=y-24;
        }
        else
        {

            cc=y;
        }
         int me=0;
         //cout<<cc<<endl;
         int e=0;
         e=cc-24;
         if(cc>=24)
         {
              me=e*60+ses;

         }
         else
         {
             me=ses;
         }
         int c1=0;
         int c2=0;
         c1=cc;
         c2=me;

        //cout<<cc<<endl;
        int con=0;
        int ln1=0;
        while(c2!=0)
        {
            c2=c2/10;
            con++;

        }
        if(c2=0)
        {
           con=0;
        }
        int con1=0;
         while(c1!=0)
        {
            c1=c1/10;
            con1++;

        }
        if(c1=0)
        {
            con1=0;
        }
        //cout<<cc<<" "<<me<<endl;
        //cout<<con1<<" "<<con<<endl;
        if(con1==0&&con==0)
        {
            cout<<"00"<<":"<<"00"<<endl;

        }

         else if(con1==1&&con==1)
        {
            cout<<"0"<<cc<<":"<<"0"<<me<<endl;


        }
         else  if(con1==1&&con==0)
        {
            cout<<"0"<<cc<<":"<<"00"<<endl;


        }
         else  if(con1>1&&con==0)
        {
            cout<<cc<<":"<<"00"<<endl;


        }
          else if(con1>1&&con==1)
        {
            cout<<cc<<":"<<"0"<<me<<endl;


        }
         else  if(con1==0&&con==1)
        {
            cout<<"00"<<":"<<"0"<<me<<endl;



        }
          else if(con1==0&&con>1)
        {
            cout<<"00"<<cc<<":"<<me<<endl;


        }

        else  if(con1==1&&con>1)
        {
            cout<<"0"<<cc<<":"<<me<<endl;


        }
        else
        {
            cout<<cc<<":"<<me<<endl;

        }
       return 0;


}

