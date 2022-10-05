#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
int p=0,q=0;
cin>>x;
int k=0;
k=x/5;

p=(x-k*5);
if(p>0&&p<5){
    k+=1;
}



cout<<k<<endl;
return 0;
}
