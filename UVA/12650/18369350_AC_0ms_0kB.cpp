#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    while(cin>>n>>r)
    {
        int ar[r];
        for(int i=0;i<r;i++)
        {
            cin>>ar[i];
        }
        int temp=0;
        int a[n];
        int ck=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<r;j++)
            {
               if(ar[j]==i)
               {
                  ck=1;
               }
            }
            if(ck!=1)
            {
                a[temp]=i;
                temp++;
            }
            ck=0;
        }
        //cout<<"temp="<<temp<<endl;
        if(temp==0)
        {
            cout<<"*"<<endl;
        }
        else
        {
             for(int i=0;i<temp;i++)
              {
                cout<<a[i]<<" ";
              }
             cout<<endl;
        }


    }
    return 0;

}
