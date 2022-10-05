#include<iostream>
using namespace std;
int main(){
    while(1){
     int n,f,i;
     int first=0;
     int secound=1;
     int l=0;
     cin>>n;

     for(i=1;i<n;i++){
         l=first+secound;
         first=secound;
         secound=l;


     }
     cout<<"The Fibonacci number for"<<' '<<n<<' '<<"is"<<' '<<l<<endl;
    }
     return 0;

}
