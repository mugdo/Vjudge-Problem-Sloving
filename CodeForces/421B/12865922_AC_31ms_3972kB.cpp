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
        int d=0;int dd=0;
        if(ar[j]=='A'){
                d=1;


            }
           else if(ar[j]=='H'){
               d=1;

            }
            else if(ar[j]=='I'){
                 d=1;

            }
           else if(ar[j]=='M'){
                 d=1;

            }
            else if(ar[j]=='O'){
                d=1;

            }
           else if(ar[j]=='T'){
                 d=1;

            }
            else if(ar[j]=='U'){
                d=1;

            }
            else if(ar[j]=='V'){
                d=1;


            }
            else if(ar[j]=='W'){
                 d=1;

            }
            else if(ar[j]=='X'){
                 d=1;

            }
            else if(ar[j]=='Y'){
                 d=1;

            }



             if(arr[j]=='A'){
                 dd=1;

            }
           else if(arr[j]=='H'){
                dd=1;

            }
            else if(arr[j]=='I'){
                 dd=1;

            }
           else if(arr[j]=='M'){
                dd=1;

            }
            else if(arr[j]=='O'){
                dd=1;

            }
           else if(arr[j]=='T'){
                dd=1;

            }
            else if(arr[j]=='U'){
               dd=1;

            }
            else if(arr[j]=='V'){
              dd=1;


            }
            else if(arr[j]=='W'){
              dd=1;

            }
            else if(arr[j]=='X'){
                dd=1;

            }
            else if(arr[j]=='Y'){
                dd=1;

            }





      if(s==ss&&d==1&&dd==1){


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


