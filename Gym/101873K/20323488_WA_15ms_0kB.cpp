#include<bits/stdc++.h>
using namespace std;
struct s
{
    string a;
    long long int d;
};
bool operator <(s x,s y)
{
    if(x.d!=y.d)
    {
        return x.d>y.d;
    }
}

int main()
{
    long long int n,d,k;
    cin>>n>>d>>k;
    s ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].a;
        cin>>ar[i].d;
    }
     sort(ar,ar+n);
     long long int sum=0,ck=0;
     int rk=0;
     for(int i=0;i<k;i++)
    {

        sum+=ar[i].d;
        ck++;
        if(sum>=d)
        {
            rk=1;
            break;
        }

    }
    //cout<<"ck="<<ck<<endl;
    if(rk==0)
    {
        cout<<"impossible"<<endl;
    }
    else
    {
        for(int j=0;j<ck;j++)
        {
            cout<<ar[j].a<<", YOU ARE FIRED !"<<endl;
            //break;
        }
    }

    return 0;
}
