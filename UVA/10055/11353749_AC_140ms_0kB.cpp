#include<iostream>
using namespace std;
int main(){
long long int a,b,d;
while(cin>>a>>b){
        if(a>b){

            d=a-b;
        }
      else {
        d=b-a;

      }
       cout<<d<<endl;
}
return 0;
}
