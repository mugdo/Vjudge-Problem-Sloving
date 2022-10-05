#include<bits/stdc++.h>
using namespace std;
int rk=0;
int ternarySerch(int start,int d,int n)
{
    if((d-start)>0)
    {
        int oneThard=0;
        oneThard=start+(d-start)/3;
        int twothard=0;
        twothard==oneThard+(d-start)/3;
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
            return 1;
        }

        else if(temp1==temp2)
        {
            if(twothard-oneThard<=100000)
            {
                for(int i=oneThard;i<=oneThard;i++)
                {
                    int temp=d/(i+1)+i;
                    if(d/(i+1)!=0)
                    {
                        temp+=1;
                    }
                    if(temp<=n)
                    {
                        return 0;
                    }
                }
            }
            else
             return ternarySerch(oneThard,twothard,n);
        }
        else if(temp1<n)
        {

            return ternarySerch(oneThard,d,n);

        }
        else
        {

           return  ternarySerch(start,twothard,n);

        }
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
