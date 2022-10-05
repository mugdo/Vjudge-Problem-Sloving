#include<iostream>
using namespace std;
int main(){
int t,sum=0;

cin>>t;
int cont=1;
for(int i=0;i<t;i++){
int a,b;

cin>>a>>b;
if(a>10||b>10)
     {


     return 1;
     }
     else if(a<0||b<0){

      return 1;
     }

  else{
   sum=a+b;
   cout<<"Case"<<' ';
   cout<<cont<<":"<<' '<<sum<<endl;
    cont++;

  }

}

return 0;
}
