#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int ck1=0;
    int ck2=0;
    for(int i=0;i<n;i++)
    {
         if(s[i]>='A'&&s[i]<='Z')
        {

            //cout<<"ss"<<endl;
            ck1+=1;

        }

    }
     for(int j=0;j<n;j++)
    {
         if(s[j]>='a'&&s[j]<='z')
        {

            //cout<<"ss"<<endl;
            ck2+=1;

        }

    }



    if(ck1>ck2)
    {
        for(int i=0;i<n;i++)
        {
        if( s[i]=='a')
            s[i]='A';
        if( s[i]=='b')
            s[i]='B';
        if( s[i]=='c')
            s[i]='C';
        if( s[i]=='d')
            s[i]='D';
        if( s[i]=='e')
           s[i]='E';
        if( s[i]=='f')
            s[i]='F';
        if( s[i]=='g')
            s[i]='G';
        if( s[i]=='h')
            s[i]='H';
        if( s[i]=='i')
           s[i]='I';
        if( s[i]=='j')
           s[i]='J';
        if( s[i]=='k')
           s[i]='K';
        if( s[i]=='l')
            s[i]='L';
        if( s[i]=='m')
           s[i]='M';
        if( s[i]=='n')
           s[i]='N';
        if( s[i]=='o')
            s[i]='O';
        if( s[i]=='p')
            s[i]='P';
        if( s[i]=='q')
            s[i]='Q';
        if( s[i]=='r')
            s[i]='R';
        if( s[i]=='s')
            s[i]='S';
        if( s[i]=='t')
           s[i]='T';
        if( s[i]=='u')
            s[i]='U';
        if( s[i]=='v')
            s[i]='V';
        if( s[i]=='w')
           s[i]='W';
        if( s[i]=='x')
           s[i]='X';
        if( s[i]=='y')
           s[i]='Y';
        if( s[i]=='z')
         s[i]='Z';

        }
        cout<<s<<endl;
    }
    else if(ck2>=ck1)
    {
          for(int i=0;i<n;i++)
        {
        if( s[i]=='A')
            s[i]='a';
        if( s[i]=='B')
            s[i]='b';
        if( s[i]=='C')
            s[i]='c';
        if( s[i]=='D')
            s[i]='d';
        if( s[i]=='E')
           s[i]='e';
        if( s[i]=='F')
            s[i]='f';
        if( s[i]=='G')
            s[i]='g';
        if( s[i]=='H')
            s[i]='h';
        if( s[i]=='I')
           s[i]='i';
        if( s[i]=='J')
           s[i]='j';
        if( s[i]=='K')
           s[i]='k';
        if( s[i]=='L')
            s[i]='l';
        if( s[i]=='M')
           s[i]='m';
        if( s[i]=='N')
           s[i]='n';
        if( s[i]=='O')
            s[i]='o';
        if( s[i]=='P')
            s[i]='p';
        if( s[i]=='Q')
            s[i]='q';
        if( s[i]=='R')
            s[i]='r';
        if( s[i]=='S')
            s[i]='s';
        if( s[i]=='T')
           s[i]='t';
        if( s[i]=='U')
            s[i]='u';
        if( s[i]=='V')
            s[i]='v';
        if( s[i]=='W')
           s[i]='w';
        if( s[i]=='X')
           s[i]='x';
        if( s[i]=='Y')
           s[i]='y';
        if( s[i]=='Z')
         s[i]='z';

        }
        cout<<s<<endl;

    }





    return 0;

}


