#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ar[n];
int a=0;
int b=0;
int ck=0;


for(int i=0;i<n;i++){
            cin>>ar[i];
        if(ck==0){
            b=ar[i];
            a=ar[i];
            ck=1;
        }




    if(a<=ar[i]){
        a=ar[i];
    }
    if(b>=ar[i]){
      b=ar[i];

}
}
int p=0;
p=a-b;

int cn=0;
int cn1=0;
for(int j=0;j<n;j++){
    if(a==ar[j]){
            cn++;

    }
    if(b==ar[j]){
            cn1++;

    }

}
int q=0;
q=cn*cn1;



cout<<p<<" "<<q<<endl;

return 0;

}
