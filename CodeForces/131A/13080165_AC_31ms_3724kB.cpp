#include<bits/stdc++.h>
int  mck=1;
using namespace std;
int main(){
    string s="";
    cin>>s;
    int l=0;
    l=s.size();
    int ck1=0;
    int ck2=0;
    for(int i=0;i<l;i++){
          if (s[i] >= 'A' && s[i] <= 'Z') {

          ck1+=1;
          }
    }


    string ss="";
    if(ck1==l){
        for(int j=0;j<l;j++){
            s[j]=s[j]+32;
            cout<<s[j];
        }
        cout<<endl;
        return 0;
        //cout<<"#"<<endl;


    }
    if(ck2==l){
             mck=1;
        for(int j=0;j<l;j++){
            s[j]=s[j]-32;
            cout<<s[j];
        }
        cout<<endl;
        return 0;

    }












    int ck3=1;
    if(s[0] >= 'a' && s[0] <= 'z'){
            for(int f=1;f<l;f++){
            if (s[f] >= 'A' && s[f] <= 'Z'){
                     ck3+=1;

            }

    }
}
int mck=0;
string g="";
    if(ck3==l){



    if(s[0]=='a')s[0]='A';
    if(s[0]=='b')s[0]='B';
    if(s[0]=='c')s[0]='C';
    if(s[0]=='d')s[0]='D';
    if(s[0]=='e')s[0]='E';
    if(s[0]=='f')s[0]='F';
    if(s[0]=='g')s[0]='G';
    if(s[0]=='h')s[0]='H';
    if(s[0]=='i')s[0]='I';
    if(s[0]=='j')s[0]='J';
    if(s[0]=='k')s[0]='K';
    if(s[0]=='l')s[0]='L';
    if(s[0]=='m')s[0]='M';
    if(s[0]=='n')s[0]='N';
    if(s[0]=='o')s[0]='O';
    if(s[0]=='p')s[0]='P';
    if(s[0]=='q')s[0]='Q';
    if(s[0]=='r')s[0]='R';
    if(s[0]=='s')s[0]='S';
    if(s[0]=='t')s[0]='T';
    if(s[0]=='u')s[0]='U';
    if(s[0]=='v')s[0]='V';
    if(s[0]=='w')s[0]='W';
    if(s[0]=='x')s[0]='X';
    if(s[0]=='y')s[0]='Y';
    if(s[0]=='z')s[0]='Z';
    cout<<s[0];

    for(int p=1;p<l;p++){
            if(s[p]=='A')s[p]='a';
            if(s[p]=='B')s[p]='b';
            if(s[p]=='C')s[p]='c';
            if(s[p]=='D')s[p]='d';
            if(s[p]=='E')s[p]='e';
            if(s[p]=='F')s[p]='f';
            if(s[p]=='G')s[p]='g';
            if(s[p]=='H')s[p]='h';
            if(s[p]=='I')s[p]='i';
            if(s[p]=='J')s[p]='j';
            if(s[p]=='K')s[p]='k';
            if(s[p]=='L')s[p]='l';
            if(s[p]=='M')s[p]='m';
            if(s[p]=='N')s[p]='n';
            if(s[p]=='O')s[p]='o';
            if(s[p]=='P')s[p]='p';
            if(s[p]=='Q')s[p]='q';
            if(s[p]=='R')s[p]='r';
            if(s[p]=='S')s[p]='s';
            if(s[p]=='T')s[p]='t';
            if(s[p]=='U')s[p]='u';
            if(s[p]=='V')s[p]='v';
            if(s[p]=='W')s[p]='w';
            if(s[p]=='X')s[p]='x';
            if(s[p]=='Y')s[p]='y';
            if(s[p]=='Z')s[p]='z';


    }

  for(int n=1;n<l;n++){
    cout<<s[n];

  }


     return 0;
    }

    if(mck==0){
        cout<<s<<endl;
    }






return 0;
}
