#include<bits/stdc++.h>
using namespace std;
int main(){
    char ar[1000000];
    char arr[1000000];
    cin>>ar;
    int p=0;
    int k=0;
    p=strlen(ar);
    int check=0;

    if(p==1){
            check=1;
            if(ar[0]=='A'){
                cout<<"YES"<<endl;

            }
           else if(ar[0]=='H'){
                cout<<"YES"<<endl;

            }
            else if(ar[0]=='I'){
                cout<<"YES"<<endl;

            }
           else if(ar[0]=='M'){
                cout<<"YES"<<endl;

            }
            else if(ar[0]=='O'){
                cout<<"YES"<<endl;

            }
           else if(ar[0]=='T'){
                cout<<"YES"<<endl;

            }
            else if(ar[0]=='U'){
                cout<<"YES"<<endl;

            }
            else if(ar[0]=='V'){
                cout<<"YES"<<endl;


            }
            else if(ar[0]=='W'){
                cout<<"YES"<<endl;

            }
            else if(ar[0]=='X'){
                cout<<"YES"<<endl;

            }
            else if(ar[0]=='Y'){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;

            }


    }
    if(check==0){
   for(int i=p-1;i>=0;i--){

    arr[k]=ar[i];

    k++;


   }
   int count=0;



   for(int j=0;j<p;j++){
         char s='\0';
         char ss='\0';

        s=ar[j];
        ss=arr[j];



      if(s==ss){


        count+=1;
      }

      }



   if(count==p){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
return 0;
}


