#include<bits/stdc++.h>
using namespace std;

int main(){
int n,min=0,max=0,f=0,x=0,y=0;
while(cin>>n){


x=n/7;
max=x*2;
min=x*2;
y=n%7;

if(y==1){
max+=1;
}
if(y>=2&&y<7){
max+=2;
}
if(y==6){
min+=1;
}
cout<<min<<' '<<max<<endl;
}
return 0;
}