#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,a=0,b=0,c=0,d=0,f=0,s=0,k=0;
cin>>t;
for(int i=0;i<t;i++){
cin>>n;

a=(n*567)/9;
b=a+7492;
c=b*235;
d=c/47;
f=d-498;
   s=f/10;
k=s%10;
if(k<0){
    k=-1*k;
}
cout<<k<<endl;
}

return 0;
}


