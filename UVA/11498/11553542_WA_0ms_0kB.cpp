#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){

        cin>>a>>b;
        cin>>c>>d;
        if(a==c||b==d){
            cout<<"divisa"<<endl;
        }

        else if(a<c&&b<d){
            cout<<"NE"<<endl;
        }
        else if(a<c&&b>d){
            cout<<"SE"<<endl;
        }
        else if(a>c&&b>d){
            cout<<"SO"<<endl;
        }
        else if(a>c&&b<d){
            cout<<"NO"<<endl;
        }
    }


return 0;
}
