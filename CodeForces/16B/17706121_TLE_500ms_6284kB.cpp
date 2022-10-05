#include<bits/stdc++.h>
using namespace std;
struct bag
{
    int a,b;
};
bool operator <(bag x,bag y)
{
    if(x.b!=y.b)
        return x.b>y.b;
}
int main()
{
    int n,m;
    cin>>n>>m;
    bag ar[m];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i].a;
        cin>>ar[i].b;
    }

    sort(ar,ar+m);
    long long weight=n;
    long long total=0;
    for(int i=0;i<m;i++)
    {
        //cout<<"weight="<<weight<<endl;
        if(weight>=ar[i].a)
        {
            total+=(ar[i].a*ar[i].b);
            //cout<<"t="<<total<<endl;
            weight-=ar[i].a;
        }
        else if(weight<ar[i].a)
        {
            total+=weight*ar[i].b;
            //cout<<"t="<<total<<endl;
            weight=0;

        }
        else
        {
            break;
        }
        //cout<<"weight="<<weight<<endl;

       // cout<<"total="<<total<<endl;
    }
    cout<<total<<endl;


    return 0;
}
