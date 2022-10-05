#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d;
    while(1){
            cin>>t;
    if(t==0)
            {
           break;
            }
            cin>>a;
             cin>>b;

      for(int i=0;i<t;i++){
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
}

return 0;
}
