#include<bits/stdc++.h>
using namespace std;
int ternarySerch(long long start,long long ed,long long n,long long d)
{
    if((ed-start)>0)
    {
         int gk=0;
         if((ed-start)<=100)
         {
            for(long long i=start;i<=ed;i++)
            {
                int temp=(d/(i+1))+i;
                if((d%(i+1))!=0)
                {
                    temp+=1;
                }
                //cout<<"temp="<<temp<<endl;
                if(temp<=n)
                {
                    gk=1;
                    break;
                }

             }
            if(gk==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }

        }
        else
        {
            long long oneThard=0;
            oneThard=start+((ed-start)/3);
            long long twothard=0;
            twothard=oneThard+(ed-start)/3;
            long long temp1=0,temp2=0;
            temp1=(d/(oneThard+1))+oneThard;
            if((d%(oneThard+1))!=0)
            {
                temp1+=1;
            }
            temp2=d/(twothard+1)+twothard;
            if((d%(twothard+1))!=0)
            {
                temp2+=1;
            }
            if(temp1<=n||temp2<=n)
            {
                return 1;
            }

            if(temp1==temp2)
            {
                start=oneThard;
                ed=twothard;

                return ternarySerch(start,ed,n,d);
            }
            else if(temp2>temp1)
            {
                ed=twothard;
                return  ternarySerch(start,ed,n,d);

            }
            else
            {
                start=oneThard;
                return ternarySerch(start,ed,n,d);

            }
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
        long long con=1,flag=0,sum=0,ck=0;
        if(d<=n)
        {
            ck=1;
        }
        else
        {
          if(ternarySerch(1,d,n,d))
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
