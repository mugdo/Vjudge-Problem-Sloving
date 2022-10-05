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
    //long long  ar[100000000];
    long long a;

    for(int i=0;i<n;i++)
    {
       cin>>a;
       if(a<=r||a<=p)
       con+=1;
       a=0;

    }
    cout<<con<<endl;

    return 0;
}
