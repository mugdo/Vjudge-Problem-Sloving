#include<bits/stdc++.h>
using namespace std;
int main(){
int a[3],t,j,i,cont=1;
cin>>t;
for(j=0;j<t;j++){
for(i=0;i<3;i++){
cin>>a[i];

}

sort(a,a+3);
if((a[2]*a[2])==((a[0]*a[0])+(a[1]*a[1]))){
cout<<"Case"<<' '<<cont<<":"<<' '<<"yes"<<endl;

}
else{

cout<<"Case"<<' '<<cont<<":"<<' '<<"no"<<endl;
}
cont++;
}
return 0;
}
