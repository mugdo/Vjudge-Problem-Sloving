#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar1[n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];

    }
    int g=0;
    g=n-1;

    int ar2[g];
     for(int i=0;i<g;i++){
        cin>>ar2[i];

    }


    //cout<<endl;
    int ar3[n-2];
     for(int i=0;i<n-2;i++){
        cin>>ar3[i];

    }

    //cout<<endl;
    int u=9999999;
    int first=0;
    int ck2=0;
    for(int j=0;j<n;j++){

    for(int k=0;k<n-1;k++){
        if(ar1[j]==ar2[k]){
            if(ar1[ck2]!=ar1[j]){
            ar1[j]=u;
            ck2=j;
            }


        }


      }
    }
    for(int b=0;b<n;b++){
    if(ar1[b]!=u){
    first=ar1[b];
    }
    }
    int l=9999999;
    cout<<first<<endl;
    //cout<<"@"<<endl;
    int secound=0;
    int ck=0;


    for(int j=0;j<n-1;j++){

    for(int k=0;k<n-2;k++){
        if(ar2[j]==ar3[k]){
            if(ar2[ck]!=ar2[j])
            ar2[j]=l;
            ck=j;


        }


      }
    }


    for(int y=0;y<n-1;y++){

    if(ar2[y]!=l){
       secound=ar2[y];
    }

}
    cout<<secound<<endl;




return 0;
}
