#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    int ar[20];
    cin>>t;
    for(int j=1;j<=t;j++){
    for(int i=0;i<10;i++){

         cin>>ar[i];


    }
    sort(ar,ar+10);
    cout<<j<<" "<<ar[7]<<endl;
    }


return 0;
}


