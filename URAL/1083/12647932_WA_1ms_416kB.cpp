#include<bits/stdc++.h>
using namespace std;
int main(){
   char n[100];
   int k=0;
   int lll;
   while(cin>>lll){
       gets(n);
   k=strlen(n);
   int s=0;
   int sum=1;

   int sep=0;

   for(int i=0;i<k;i++){
        if(n[i]=='!'){
            sep+=1;
        }



   }


   if(lll%sep==0){

        for(int i=sep;i<lll;i++){
            sum=sum*i;
            i=i+sep;
            i--;
        }




   }

    if(lll%sep!=0){
        cout<<lll<<endl;


    for(int sl=1;sl<=lll;sl++){

        sum=sum*sl;


        sl=sl+sep;
        sl--;

    }

   }
   cout<<sum<<endl;




}


return 0;
}

