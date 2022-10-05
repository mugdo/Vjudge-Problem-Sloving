#include<bits/stdc++.h>
using namespace std;
int main(){
int t,array[3],i,j;
cin>>t;

int count=1;
for(j=0;j<t;j++){
for(i=0;i<3;i++){

    cin>>array[i];

}

sort(array,array+3);


    cout<<"Case"<<' '<<count<<":"<<' '<<array[1]<<endl;
    count++;


}
return 0;
}
