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
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];

        }
        int mk=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=ar[j];
                mk=max(sum,mk);
            }

        }
        if(mk==0)
        {
            cout<<"Losing streak."<<endl;
        }
        else
        {
            cout<<"The maximum winning streak is "<<mk<<"."<<endl;
        }
    }

    return 0;
}
