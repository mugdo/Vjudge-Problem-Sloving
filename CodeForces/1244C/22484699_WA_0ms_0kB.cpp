#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p,w,d;
    while(cin>>n>>p>>w>>d)
    {
        if(p==0)
        {
            cout<<"0 "<<"0 "<<n<<endl;
        }
        else
        {
            long long con=0,ck=0,d1=0,sum=0;

            if(w%d==0)
            {
                d1=1*d1;
                sum=p-d1;
                con=sum/w;

            }
            else
            {
                ck=1;
            }

            if(ck==1)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<con<<" "<<"1"<<" "<<(n-(con+1))<<endl;
            }




        }



    }
    return 0;
}
