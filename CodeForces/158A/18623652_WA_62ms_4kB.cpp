#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int flag=0;
    for(int j=0;j<n;j++)
    {
        //cout<<"ar[j]="<<ar[j]<<" k="<<k<<endl;
        if(k<ar[j])
        {
            flag++;
        }
    }
    cout<<flag<<endl;


    return 0;
}
