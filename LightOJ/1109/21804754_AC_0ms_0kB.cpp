#include<bits/stdc++.h>
using namespace std;
struct s
{
    int id;
    int d;
};
bool operator < (s x,s y)
{
    if(x.d!=y.d)
    {
        return x.d<y.d;
    }
    else
        return x.id>y.id;
}
int main()
{
    int ar[1010];
    memset(ar,0,sizeof(ar));
    ar[1]=1;
    int con=0;
    for(int i=2;i<=1000;i++)
    {
        ar[i]+=1;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                ar[i]+=1;
            }

        }
    }
    int ck=2;
    s obj[10000];
    obj[0].id=0;
    obj[1].id=1;
    obj[0].d=0;
    obj[1].d=1;
    int ck1=0;
    ck1=2;
    for(int i=2;i<=1000;i++)
    {
        obj[i].id=i;
        obj[i].d=ar[i];
        ck1++;
    }
    ck1--;
    sort(obj,obj+ck1+1);
    int t;
    cin>>t;
    for(int T=0;T<t;T++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<T+1<<": "<<obj[n].id<<endl;

    }
    return 0;
}

