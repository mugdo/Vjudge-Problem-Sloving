#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    int k,ks;

    for(int i=0;i<t;i++){
            int sum=0;
            cin>>a>>b;
            sum=a*b;
            if(a<b){
                k=a;
            }
            else{
                k=b;
            }
            if(a>b){
                ks=a;
            }
            else{
                ks=b;
            }
            int max=1;
            int min=1;



            for(int j=1;j<=k;j++){

                if(ks%j==0){
                        if(k%j==0){
                        if(max<j){
                        max=j;

                        }
                        }


                }
            }

            int lcm=0;
            lcm=sum/max;
            cout<<i+1<<" "<<lcm<<" "<<max<<endl;;



    }


return 0;
}
