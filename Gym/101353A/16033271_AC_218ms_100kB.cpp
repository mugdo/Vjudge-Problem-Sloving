#include<iostream>
using namespace std;
int ck=0;
int pk=0;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,m;
        cin>>n>>m;
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int k=0;
            int pk=0;
            cin>>ar[i];
            if(ar[i]>m)
            {
              k=m;
              while(1)
              {
                  k+=m;
                  if(k>=ar[i])
                    break;
              }
            }
            if(ar[i]==m)
            {
                k=ar[i];
            }
            if(ar[i]<m)
            {
                ar[i]+=m;
                k=m*2;
            }


            sum+=k-ar[i];
        }
        cout<<sum<<endl;

    }

    return 0;
}
