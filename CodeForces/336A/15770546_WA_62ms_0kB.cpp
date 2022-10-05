#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    //cout<<x<<y<<endl;
    int ai=0,aj=0;
    int bi=0,bj=0;
    ai=0;
    int a=0,b=0;
    int ck=0;
    int ck1=0;
    if(x<0)
    {
        a=(-1)*x;
        //cout<<"a="<<a<<endl;
        ck=1;

    }
    if(y<0)
    {
        b=(-1)*y;
        ck1=1;
    }

    //aj=a+b;
    bj=0;
    if(ck==0&&ck1==0)
    {
        //cout<<ck<<endl;
       aj=x+y;
       bi=x+y;
    }
    if(ck==1&&ck1==0)
    {
        aj=a+y;
        bi=(-1)*aj;
    }
    if(ck==1&&ck1==1)
    {
        aj=(-1)*(a+b);
        bi=(-1)*(a+b);
    }
    if(ck==0&&ck1==1)
    {
        aj=(-1)*(x+b);
        bi=x+b;
    }
    cout<<ai<<" "<<aj<<" "<<bi<<" "<<bj<<endl;



    return 0;
}
