#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cin>>n;
    int ar[n];
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];

    }
    int value=0;
    value=sum/(n/2);
    //cout<<"value="<<value<<endl;
    int ck=0;
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]==-1)
            continue;
       ck=value-ar[i];
       a[k]=i+1;
       //cout<<"ck="<<ck<<" i="<<i+1<<endl;

       for(int j=i+1;j<n;j++)
       {
           if(ar[j]!=-1&&ar[j]==ck)
           {
               //cout<<"ar[j]="<<ar[j]<<" j="<<j+1<<endl;
               ar[j]=-1;
               b[k]=j+1;
               k++;
               break;

           }
       }
    }
    for(int i=0;i<n/2;i++)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    return 0;
}
