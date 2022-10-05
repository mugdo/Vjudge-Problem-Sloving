#include<bits/stdc++.h>
using namespace std;
int main(){
    char ar[1000000];
    char arr[1000000];
    cin>>ar;
    int p=0;
    int k=0;
    p=strlen(ar);
    if(p==1){

        for(int j=0;j<6;j++){
            if(ar[0]=='A'){
                cout<<"YES"<<endl;
                return 0;
            }
           else if(ar[0]=='H'){
                cout<<"YES"<<endl;
                return 0;
            }
            else if(ar[0]=='I'){
                cout<<"YES"<<endl;
                return 0;
            }
           else if(ar[0]=='M'){
                cout<<"YES"<<endl;
                return 0;
            }
            else if(ar[0]=='O'){
                cout<<"YES"<<endl;
                return 1;
            }
           else if(ar[0]=='T'){
                cout<<"YES"<<endl;
                return 0;
            }
            else if(ar[0]=='U'){
                cout<<"YES"<<endl;
                return 0;
            }
            else if(ar[0]=='V'){
                cout<<"YES"<<endl;
                return 1;
            }
            else if(ar[0]=='W'){
                cout<<"YES"<<endl;
                return 0;
            }
            else if(ar[0]=='X'){
                cout<<"YES"<<endl;
                return 1;
            }
            else if(ar[0]=='Y'){
                cout<<"YES"<<endl;
                return 0;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }

    }
   for(int i=p-1;i>=0;i--){

    arr[k]=ar[i];

    k++;


   }
   int count=0;
   int answer=0;


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
return 0;
}


