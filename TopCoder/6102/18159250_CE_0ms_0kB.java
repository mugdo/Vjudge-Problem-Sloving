#include<bits/stdc++.h>
using namespace std;
struct bag
{
    int a,b;
};
int main()
{
    int t,n;
    cin>>n>>t;
    bag ar[n];
    int mn=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].a;
        cin>>ar[i].b;
    }
    mn=ar[0].a;
    for(int i=0;i<n;i++)
    {
        if(mn>ar[i].a)
        {
            mn=ar[i].a;
        }
    }

    int sum[t+1];
    int s[t+1];
    for(int i=0;i<=t;i++)
    {
        sum[i]=0;
        s[i]=0;
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
       if(mn==ar[i].a)
       {
           if(mx<ar[i].b)
           {
               mx=ar[i].b;
           }
       }
    }
    sum[mn]=mx;
    s[mn]=mx;
    cout<<"sum["<<mn<<"]="<<mx<<endl;
    int temp=0;

    for(int i=1;i<n;i++)
    {
        int pk=0;
        for(int j=0;j<n;j++)
        {
            if(ar[i].a>ar[j].a)
            {
                temp=sum[ar[j].a]+sum[ar[i].a-ar[j].a];
                if(pk<temp)
                {
                   pk=temp;
                }


            }
            temp=0;


        }
        cout<<"pk="<<pk<<" ar[i].b="<<ar[i].b<<endl;

        s[i]=max(ar[i].b,pk);
        cout<<" s[i]="<<s[i]<<endl;
        sum[i]=s[i];
    }
    for(int i=1;i<=n;i++)
    {

       cout<<s[i]<<" "<<endl;
    }



    return 0;
}
/*
5 6
1 50
2 110
3 170
4 230
5 500
*/
