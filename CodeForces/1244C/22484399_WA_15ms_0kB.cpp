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
            long long con=0;
            con=p/w;
            con-=d;
            long long w1=0;
            w1=con*w;
            long long sum=0;
            long long d1=0;
            if(w%d==0)
            {
                d1=(p-w1);
                sum=d1/d;
            }
            else
            {
                d1=0;
            }
            if(d1==0)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<w1<<" "<<sum<<" "<<"0"<<endl;
            }




        }



    }
    return 0;
}
