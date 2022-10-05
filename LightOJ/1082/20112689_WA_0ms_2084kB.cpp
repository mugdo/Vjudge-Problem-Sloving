#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int len=log2(n);
    int mar[n][len];
    for(int p=0;p<n;p++)
    {
        mar[p][0]=ar[p];
    }
    int ck=1;
    for(int k=0;k<len;k++)
    {
        for(int p=0;p<n-ck;p++)
        {
           // cout<<"mar[p][k]="<<mar[p][k]<<"  mar[p+ck][k]= "<<mar[p+ck][k]<<endl;
            mar[p][k+1]=min(mar[p][k],mar[p+ck][k]);
            cout<<"mar[p][k+1]="<<mar[p][k+1]<<endl;
        }
        ck++;
        cout<<endl;
    }
    return 0;
}
