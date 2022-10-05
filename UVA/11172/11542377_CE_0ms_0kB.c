#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,count=0;
int t;
cin>>t;
for(int i=0;i<t;i++){
cin>>a>>b;
      if(a<b){
      cout<<"<"<<endl;
     }
      else if(a>b){

 cout<<">"<<endl;
   }
   else{
    cout<<"="<<endl;
   }
}

return 0;
}
