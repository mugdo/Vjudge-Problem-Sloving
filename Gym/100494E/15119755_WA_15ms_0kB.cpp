#include<bits/stdc++.h>
using namespace std;

int a[100];
int mss=0;
int main()
{
    int n,b,h,w;
    cin>>n>>b>>h>>w;
    int r=0;
    int rk=0;
    int jk=0;
    for(int i=0;i<h;i++)
    {
       // cout<<"i="<<i<<endl;
        int p;
        cin>>p;
        int ar[w];
        int sum=0;
        int ck=0;
        for(int j=0;j<w;j++)
        {
            ar[j]=0;
        }
        for(int k=0;k<w;k++)
        {
            cin>>ar[k];
        }
        for(int l=0;l<w;l++)
        {
            if(ar[l]>=n)
            sum+=p;
            else
                ck=1;
        }
        if(ck!=1)
        {
            if(rk==0)
            {
                mss=sum;
                rk=1;
            }
            if(sum<=b)
            {
                if(mss>=sum)
                {
                    mss=sum;
                    jk=1;
                }
            }

        }

    }

   if(jk==1)
   {
       cout<<mss<<endl;
   }
    else
    {
       cout<<"stay home"<<endl;
    }
    //cout<<a[0]<<endl;
    return 0;
}
