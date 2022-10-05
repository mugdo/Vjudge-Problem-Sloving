#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int k=0;
k=n;
int p=0;
p=n;
int count=0;
for(int i=1;i<=p/2;i++){
    if(k%i==0){

        count+=1;
    }

}
cout<<count<<endl;

return 0;
}
