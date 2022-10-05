#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin>>n;
if(n<2){
    return 0;
}
long long int ar[n];
long long int a=0;
long long int b=0;
long long int ck=0;


for(long long int i=0;i<n;i++){
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
long long int p=0;
p=a-b;

long long int cn=0;
long long int cn1=0;
for(long long int j=0;j<n;j++){
    if(a==ar[j]){
            cn++;

    }
    if(b==ar[j]){
            cn1++;

    }

}
long long int q=0;
q=cn*cn1;



cout<<p<<" "<<q<<endl;

return 0;

}
