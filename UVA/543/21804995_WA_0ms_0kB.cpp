#include<bits/stdc++.h>
using namespace std;
int ar[1000010];
int main()
{
    int n;
    memset(ar,0,sizeof(ar));
    for(int i=2;i<=1000000;i++)
    {
        if(ar[i]!=1)
        {
            ar[i]=0;
            for(int j=i*2;j<=1000000;j=j+i)
            {
                ar[j]=1;
            }
        }
    }
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int ck=0;

        int pk=0;
        int rk=0;
        for(int j=2;j<n/2;j++)
        {
           if(ar[j]==0)
           {
               pk=n-j;
               if(ar[pk]==0)
               {
                   cout<<n<<" = "<<j<<" + "<<pk<<endl;
                   rk=1;
                   break;
               }
           }
        }
        if(rk==0)
        {
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }




    }

    return 0;
}

