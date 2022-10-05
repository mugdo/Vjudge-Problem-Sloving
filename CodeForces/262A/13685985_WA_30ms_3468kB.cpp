#include<bits/stdc++.h>
using namespace std;
int con=0;
int main()
{
    int n,k;
    cin>>n>>k;
    int p=0;
    int ck=0;
    for(int j=0;j<k;j++)
    {
        //int ss=0;
        p=p*10;

        p+=4;


    }
    int r=0;
     for(int j=0;j<k;j++)
    {
        r=r*10;

        r+=7;


    }
    int ar[10000];
    int a;

    for(int i=0;i<n;i++)
    {
       cin>>ar[i];
       if(ar[i]<=r||ar[i]<=p)
       con+=1;

    }
    cout<<con<<endl;

    return 0;
}
