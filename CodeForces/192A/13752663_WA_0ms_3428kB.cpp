#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int t1,t2,t3,t4,t5,t6;
    int ck=0;

    for(int i=1;i<n;i++)
    {
        t1=(i*(i+1))/2;
        t2=n-t1;
        t3=t2*2;
        t4=sqrt(t3);
        t5=t4*(t4+1);



        //cout<<"t1="<<t1<<" t2="<<t2<<" t3="<<t3<<"t4="<<t4<<" t5="<<t5<<endl;
        if(t3==t5)
        {
            cout<<"YES"<<endl;
            int ck=1;
            break;
        }


    }
    if(ck!=1)
        cout<<"NO"<<endl;
    return 0;
}
