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
       int ar[n][n];
       for(int j=0;j<n;j++)
       {
           for(int k=0;k<n;k++)
           {
               ar[j][k]=0;
           }
       }
       for(int j=0;j<n;j++)
       {
           for(int k=0;k<j+1;k++)
           {
               cin>>ar[j][k];
           }
       }
       int sum=0;
       sum+=ar[0][0];
       int k=1;
       for(int i=1;i<n;i++)
       {
           int mk=0;
           int ck=0;
           int flag=0;
           for(int j=0;j<k;j++)
           {
               if(ck==0)
               {
                   mk=ar[i][j];
                   ck=1;
               }
               else if(mk<ar[i][j])
               {
                   mk=ar[i][j];
               }
           }
           sum+=mk;
           k++;
       }
       cout<<sum<<endl;

    }

    return 0;
}

