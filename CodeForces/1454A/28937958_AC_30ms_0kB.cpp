#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int j=1;j<=n-1;j++)
        {
           ar[j]=j+1;
        }
        ar[n]=1;
        for(int j=1;j<=n;j++)
         cout<<ar[j]<<" ";
        cout<<endl;
    }
}

