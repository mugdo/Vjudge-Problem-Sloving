#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int ar[n];
        int tem[10000];
        memset(tem,0,sizeof(tem));

        int mk=0;
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];
            tem[ar[j]]+=1;
            if(mk<ar[j])
            {
                mk=ar[j];
            }

        }
//        for(int g=0;g<=mk;g++)
//        {
//            cout<<tem[g]<<" ";
//        }
//        cout<<endl;

        int ck=0;
       for(int k=1;k<=mk;k++)
       {
           if(tem[k]>1)
           {
               ck=1;
               break;
           }
       }
       int mn=0;
       int sum=0;

       if(ck==1)
       {
         for(int p=1;p<=mk;p++)
         {

             if(tem[p]>1)
             {
                 int ss=0;
                 ss=tem[p];
                 sum=0;
                 sum=(ss*(ss-1))/2;
             }
             mn+=sum;

         }
         int d=0;
         d=(n*(n-1))/2-mn;
         d+=1;
         cout<<d<<endl;

       }
       else
       {
           int d=0;
           d=(n*(n-1))/2;
           cout<<d<<endl;
       }

    }
    return 0;
}
