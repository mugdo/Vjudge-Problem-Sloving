#include<bits/stdc++.h>
using namespace std;
int rk=0;
int ternarySerch(int start,int d,int n)
{
    int oneThard=0;
    oneThard=start+(d-start)/3;
    int twothard=0;
    twothard==start+(2*(d-start))/3;
    int temp1=0,temp2=0;
    temp1=d/(oneThard+1)+oneThard;
    if(d/(oneThard+1)!=0)
    {
        temp1+=1;
    }
    temp2=d/(twothard+1)+twothard;
    if(d/(twothard+1)!=0)
    {
        temp2+=1;
    }
    if(temp1<=n||temp2<=n)
    {
        rk=1;
    }
    if((oneThard>=twothard)&&(start<=d))
    {
        int pk=0;
        pk=ternarySerch(oneThard,d,n);
        if(pk==1)
        {
            rk=1;
            return 1;
        }
    }
    else if(start<=d)
    {
       int pk=0;
       ternarySerch(start,twothard,n);
        if(pk==1)
        {
            rk=1;
            return 1;
        }
    }
    if(rk==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,d;
        cin>>n>>d;
        rk=0;
        long long con=1,flag=0,sum=0,ck=0;
        if(d<=n)
        {
            ck=1;
        }
        else
        {
          if(ternarySerch(1,d,n))
          {
              ck=1;
          }
        }

        if(ck==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
