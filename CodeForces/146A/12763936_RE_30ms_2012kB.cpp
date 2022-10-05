#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int k=0;
    cin>>n;
    string s;
    cin>>s;
    k=n/2;
    int ck=0;
    int sum1=0;
    int sum2=0;


    for(int i=0;i<k;i++){

        sum1+=s[i];
    }
    for(int i=k;i<n;i++){
      sum2+=s[i];

    }
    if(sum1==sum2){
       ck=1;

    }
    int p=0;

    for(int ss=0;ss<n;ss++){

        if(s[ss]=='4'){

            p+=1;
        }
        else if(s[ss]=='7'){

            p+=1;
        }
        else{
                cout<<"NO"<<endl;
                return 1;


        }

    }
    if(ck==1&&p==n){

        cout<<"YES"<<endl;
    }
    else{

        cout<<"NO"<<endl;
    }













return  0;
}



