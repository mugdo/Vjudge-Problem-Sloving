#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin>>n;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int ar1[n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
        sum1+=ar1[i];

    }
    cout<<sum1<<endl;

   int ar2[n-1];


     for(int j=0;j<n-1;j++){
        cin>>ar2[j];
        sum2+=ar2[j];

    }
    cout<<sum2<<endl;

    sum3=0;
    int ar3[n-2];
    int b=0;
     for(int j=0;j<n-2;j++){
        cin>>ar3[j];
        sum3+=ar3[j];

    }





    int s=0;
    s=sum1-sum2;
    int ss=0;
    ss=sum2-sum3;


    cout<<s<<endl;
    cout<<ss<<endl;
    return 0;


}
