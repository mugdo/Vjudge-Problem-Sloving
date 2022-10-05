#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    int k=0;
    while(cin>>n){
            int sum=0;
        if(n>0){
                for(int j=1;j<=n;j++){

                    sum+=j;
                }

        }
        else{


        for(int i=n;i<=1;i++){

        sum+=i;

            }
        }
        cout<<sum<<endl;

    }

return 0;
}

