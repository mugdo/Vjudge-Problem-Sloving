#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;

        int ar[n];
        int ck=0;
        for(int j=1;j<=n;j++)
        {
            cin>>ar[j];
        }
        while(1)
        {


            for(int k=1;k<=n;k++)
            {
                if(ar[k]!=k)
                {
                    ck++;
                    int b=ar[k];
                    ar[k]=k;
                    ar[b]=b;
                }
            }
            //for(int h=1;h<=n;h++)
           // {
           //     cout<<ar[h]<<" ";
           // }
           // cout<<endl;
            int con=0;
            for(int r=1;r<=n;r++)
            {
                if(ar[r]==r)
                {
                    con++;
                }
            }
            if(con==n)
                break;

        }
        cout<<"Case"<<" "<<i<<":"<<" "<<ck<<endl;
    }
    return 0;
}
