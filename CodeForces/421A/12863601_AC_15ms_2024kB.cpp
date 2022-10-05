#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,b;
    int ar[200];
    int arr[200];
    cin>>n>>a>>b;
    for(int k=1;k<=a;k++){

        cin>>ar[k];
    }
     for(int p=1;p<=b;p++){

        cin>>arr[p];
    }


    for(int i=1;i<=n;i++){
               int ss=0;
        for(int j=1;j<=a;j++){
            if(ar[j]==i){
                ss=j;

                cout<<1<<" ";
            }

        }

            for(int r=1;r<=b;r++){
            if(arr[r]==i){
                    if(ar[ss]!=arr[r]){

                cout<<2<<" ";
                    }
            }



    }

}
cout<<endl;

return 0;
}
