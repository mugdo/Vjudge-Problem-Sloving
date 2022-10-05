#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
int count=1;
int ar[100];
cin>>t;
for(int i=0;i<t;i++){
cin>>n;
for(int j=0;j<n;j++){
cin>>ar[j];

}
int h=0,l=0;
for(int k=0;k<n-1;k++){
if(ar[k]<ar[k+1]){
h=h+1;

}

else if(ar[k]>ar[k+1]){
l=l+1;

}



}
cout<<"Case"<<' '<<count<<":"<<' '<<h<<' '<<l<<endl;
count++;

}
return 0;

}
