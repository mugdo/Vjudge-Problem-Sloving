#include<bits/stdc++.h>
using namespace std;
int main()
{
    int di,dj;
    cin>>di>>dj;
    int d1=0,d2=0;
    int ck1=0,ck2=0;
    if(di<0)
    {
        d1=(-1)*di;
        ck1=1;
    }
    if(dj<0)
    {
        d2=(-1)*dj;
        ck2=1;
    }


 // cout<<"d1 & d2 ="<<d1<<" "<<d2<<endl;
  //cout<<"ck1 &ck2="<<ck1<<" "<<ck2<<endl;

    int ai=0,aj=0,ci=0,cj=0;
    if(ck1==0&&ck2==0)
    {
        ai=0;
        aj=di+dj;
        ci=di+dj;
        cj=0;

    }
    if(ck1==1&&ck2==0)
    {
        ai=(-1)*(d1+dj);
        aj=0;
        ci=0;
        cj=d1+dj;

    }
     if(ck1==1&&ck2==1)
    {
        //cout<<"d1="<<d1<<endl;
        ai=(-1)*(d1+d2);
        aj=0;
        ci=0;
        cj=ai;

    }
   if(ck1==0&&ck2==1)
    {
        //cout<<"di="<<di<<""<<endl;
        ai=0;
        aj=(-1)*(di+d2);
        ci=di+d2;
        cj=0;

    }
    cout<<ai<<" "<<aj<<" "<<ci<<" "<<cj<<endl;
    return 0;
}
