#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,x,y,a[10010],b[10010],temp,c,flag;
    c=1;
    flag=0;
    while(cin>>n>>q){
      if(n==0&&q==0)
      {
          break;
      }
        for(int i=0;i<n;i++){
            cin>>x;
            a[i]=x;
        }
        for(int j=0;j<q;j++){
            cin>>y;
            b[j]=y;
        }
        sort(a,a+n);

        cout<<"CASE# "<<c<<":"<<endl;
        for(int m=0;m<q;m++)
        {
            flag=0;
            for(int l=0;l<n;l++){
                if(a[l]==b[m])
                {
                    cout<<b[m]<<" found at "<<l+1<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {

               cout<<b[m]<<" not found"<<endl;
            }
        }

       c++;

    }
return 0;
}
