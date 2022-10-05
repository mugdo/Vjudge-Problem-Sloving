#include<bits/stdc++.h>
using namespace std;
int ternarySerch(int start,int d,int n)
{
    if((d-start)>0)
    {
         int gk=0;
         if((d-start)<=100000)
         {
            for(int i=start;i<=d;i++)
            {
                int temp=d/(i+1)+i;
                if(d%(i+1)!=0)
                {
                    temp+=1;
                }
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
        int oneThard=0;
        oneThard=start+(d-start)/3;
        int twothard=0;
        twothard=oneThard+(d-start)/3;
        int temp1=0,temp2=0;
        temp1=d/(oneThard+1)+oneThard;
        if(d%(oneThard+1)!=0)
        {
            temp1+=1;
        }
        temp2=d/(twothard+1)+twothard;
        if(d%(twothard+1)!=0)
        {
            temp2+=1;
        }
        if(temp1<=n||temp2<=n)
        {
            return 1;
        }

        if(temp1==temp2)
        {

            return ternarySerch(oneThard,twothard,n);
        }
        else if(temp2>n)
        {
            return  ternarySerch(start,twothard,n);

        }
        else
        {
            return ternarySerch(oneThard,d,n);

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
            //cout<<"o="<<o<<endl;
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
