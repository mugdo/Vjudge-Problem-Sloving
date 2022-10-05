#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a=0,b=0,c=0;
int ar[n];
int check1=0;
int ck=0;
int ck1=0;
for(int i=0;i<n;i++){
        cin>>ar[i];





}
for(int j=0;j<n;j++){
        if(check1!=1){
           a=ar[j];
           check1=1;

        }

        if(b==0&&b!=a&&ck!=1&&b!=c){
                b=ar[j];
                ck=1;


        }
        if(c==0&&c!=b&&c!=a&&ck1!=1){
                c=ar[j];
                ck1=1;


        }

}


if(check1==1&&ck==1&&ck1==1){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}






return 0;
}
