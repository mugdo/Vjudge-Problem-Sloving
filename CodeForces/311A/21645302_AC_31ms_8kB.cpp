#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int temp=0;
    temp=n*(n-1)/2;
    if(k>=temp)
    {
        cout<<"no solution"<<endl;
    }
    else
    {
        int ck=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                cout<<i<<" "<<j<<endl;
                ck++;
                if(ck>=n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;

        }
    }


    return 0;
}
