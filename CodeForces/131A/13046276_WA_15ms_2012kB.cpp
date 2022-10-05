#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[200];
    cin>>s;
    int k=0;
    k=strlen(s);
    int count=0;
    for(int i=0;i<k;i++){

    if(s[i]=='a')count+=1;
    if(s[i]=='b')count+=1;
    if(s[i]=='c')count+=1;
    if(s[i]=='d')count+=1;
    if(s[i]=='e')count+=1;
    if(s[i]=='f')count+=1;
    if(s[i]=='g')count+=1;
    if(s[i]=='h')count+=1;
    if(s[i]=='i')count+=1;
    if(s[i]=='j')count+=1;
    if(s[i]=='k')count+=1;
    if(s[i]=='l')count+=1;
    if(s[i]=='m')count+=1;
    if(s[i]=='n')count+=1;
    if(s[i]=='o')count+=1;
    if(s[i]=='p')count+=1;
    if(s[i]=='q')count+=1;
    if(s[i]=='r')count+=1;
    if(s[i]=='s')count+=1;

    if(s[i]=='t')count+=1;
    if(s[i]=='u')count+=1;
    if(s[i]=='v')count+=1;
    if(s[i]=='w')count+=1;
    if(s[i]=='x')count+=1;
    if(s[i]=='y')count+=1;
    if(s[i]=='z')count+=1;



    }
    if(count==k&&k>1){
        cout<<s<<endl;
    }
    else{

            if(s[0]=='a'){
                s[0]='A';
                //cout<<s[0]<<endl;
            }
            else if(s[0]=='b')
            s[0]='B';
            else if(s[0]=='c')
            s[0]='C';
            else if(s[0]=='d')
            s[0]='D';
            else if(s[0]=='e')
            s[0]='E';
            else if(s[0]=='f')
            s[0]='F';
            else if(s[0]=='g')
            s[0]='G';
            else if(s[0]=='h')
            s[0]='H';
            else if(s[0]=='i')
            s[0]='I';
            else if(s[0]=='j')
            s[0]='J';
            else if(s[0]=='k')
            s[0]='K';
            else if(s[0]=='l')
            s[0]='L';
            else if(s[0]=='m')
            s[0]='M';
            else if(s[0]=='n')
            s[0]='N';
            else if(s[0]=='o')
            s[0]='O';
            else if(s[0]=='p')
            s[0]='P';
            else if(s[0]=='q')
            s[0]='Q';
            else if(s[0]=='r')
            s[0]='R';
            else if(s[0]=='s')
            s[0]='S';
            else if(s[0]=='t')
            s[0]='T';
            else if(s[0]=='u')
            s[0]='U';
            else if(s[0]=='v')
            s[0]='V';
            else if(s[0]=='w')
            s[0]='W';
            else if(s[0]=='x')
            s[0]='X';
            else if(s[0]=='y')
            s[0]='Y';
            else if(s[0]=='z')
            s[0]='Z';


            for(int i=1;i<k;i++){

            if(s[i]=='A')s[i]='a';
            if(s[i]=='B')s[i]='b';
            if(s[i]=='C')s[i]='c';
            if(s[i]=='D')s[i]='d';
            if(s[i]=='E')s[i]='e';
            if(s[i]=='F')s[i]='f';
            if(s[i]=='G')s[i]='g';
            if(s[i]=='H')s[i]='h';
            if(s[i]=='I')s[i]='i';
            if(s[i]=='J')s[i]='j';
            if(s[i]=='K')s[i]='k';
            if(s[i]=='L')s[i]='l';
            if(s[i]=='M')s[i]='m';
            if(s[i]=='N')s[i]='n';
            if(s[i]=='O')s[i]='o';
            if(s[i]=='P')s[i]='p';
            if(s[i]=='Q')s[i]='q';
            if(s[i]=='R')s[i]='r';
            if(s[i]=='S')s[i]='s';
            if(s[i]=='T')s[i]='t';
            if(s[i]=='U')s[i]='u';
            if(s[i]=='V')s[i]='v';
            if(s[i]=='W')s[i]='w';
            if(s[i]=='X')s[i]='x';
            if(s[i]=='Y')s[i]='y';
            if(s[i]=='Z')s[i]='z';



            }
            cout<<s<<endl;
    }


return 0;
}
