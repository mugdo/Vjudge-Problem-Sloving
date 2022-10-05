#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int pk=0;
        pk=n-1;
        int ck=0;
        int rk=0;
        for(int i=0;i<n;i++)
        {
            ck=pk;
            for(int j=0;j<n+i;j++)
            {
                if(ck!=0)
                {
                    cout<<".";
                }
                else
                    cout<<"*";
                if(ck-1>=0)
                ck--;

            }

            cout<<endl;
            pk--;


        }
         rk=1;
         int hk=0;
         int gm=0;
         gm=n+n-2;
         for(int i=0;i<n-1;i++)
         {
             hk=rk;
             for(int j=0;j<gm-i;j++)
             {
                 if(hk!=0)
                 {
                     cout<<".";
                 }
                 else
                    cout<<"*";
                 if(hk-1>=0)
                 {
                     hk--;
                 }
             }
             cout<<endl;
             rk++;
         }
         cout<<endl;

    }
    return 0;
}

