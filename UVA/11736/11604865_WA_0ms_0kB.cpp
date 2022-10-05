#include<bits/stdc++.h>
using namespace std;
unsigned long long decemal(string z,int y){
unsigned long long d=0;
unsigned long long p=1;
int h;
for(h=y-1;h>=0;h--){
    d=(d+((z[h]-'0')*p));
    p=2*p;
}
return d;
}
int main(){
    int b,k;
    string p;
    int q;
    int sum=0;
    string v[300];
    string e[300];
    int  n[300];
    int s=0;
    int t=0;
    cin>>b>>k;
    for(int i=0;i<k;i++){

    cin>>p;
    v[s]=p;




         cin>>q;
         n[t]=q;
         sum+=q;
         t++;
         s++;


    }

    string li;

    string pr[300];
    for(int i=0;i<sum;i++){
        cin>>li;
        pr[i]=li;


    }
     int m;
     cin>>m;

    string x;
    string ari[300];
    for(int y=0;y<m;y++){
        cin>>x;

        ari[y]=x;
    }


   int c;
    int h=0,bi=0,yi=0;
    int count=0,fi,mi=0;
    int mt=0;

    int a=0,r,sb=0,ti=0;
    string xi[300];

int con=0;
cout<<v[1]<<endl;
    for(int y=0;y<m;y++){

        if(ari[y]==v[y]){



                for(int i=0;i<n[con];i++){

              xi[h]+=pr[mi];



              mi++;




           }



           bi=b*n[con];

           cout<<ari[y]<<"="<<decemal(xi[h],bi)<<endl;



        }
        else{
            cout<<ari[y]<<"="<<endl;
            mi+=n[con];


        }


        h++;


        con++;


    }




return 0;
}


