 #include<bits/stdc++.h>
 using namespace std;
 int sum=0;
 int main()
 {
     string s;
     cin>>s;
     int ss=s[1]-'0';
     ss=ss;

     int con=0;
     int ar[100][100];
     if(s[0]=='a')
     {
         con=1;
     }
     else if(s[0]=='b')
     {
         con=2;
     }
     else if(s[0]=='c')
     {
         con=3;
     }
     else if(s[0]=='c')
     {
         con=4;
     }
     else if(s[0]=='e')
     {
         con=5;
     }
     else if(s[0]=='f')
     {
         con=6;
     }
     else if(s[0]=='b')
     {
         con=2;
     }
     else if(s[0]=='g')
     {
         con=7;
     }
     else if(s[0]=='h')
     {
         con=8;
     }
     con=con;
     //cout<<con<<endl;
     for(int i=1;i<=8;i++)
     {
         for(int j=1;j<=8;j++)
         {
             ar[i][j]=1;

         }
     }
     //cout<<ss<<" "<<con<<endl;
     int p=ss-1;


     if(ar[ss-1][con-1]==1)
     {
         sum+=1;
         cout<"#1";

     }
      if(ar[ss-1][con]==1)
     {
         cout<"#1";
         sum+=1;

     }
      if(ar[ss-1][con+1]==1)
     {
         sum+=1;

     }
      if(ar[ss][con-1]==1)
     {
         sum+=1;

     }
      if(ar[ss][con+1]==1)
     {
         sum+=1;

     }
      if(ar[ss+1][con-1]==1)
     {
         sum+=1;

     }
      if(ar[ss+1][con]==1)
     {
         sum+=1;

     }
      if(ar[ss+1][con+1]==1)
     {
         sum+=1;

     }
     cout<<sum<<endl;

     return 0;
 }
