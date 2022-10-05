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
    int k=2;
    int a[n/2];
    int p=0;
    int pk=0;
    int ss=100000;
    for(int i=1;i<n-1;i++)
    {
        int a1[n-1];
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                a1[f]=ar[j];
                //cout<<"a1[f]="<<a1[f]<<endl;
                f++;
            }
        }
       // cout<<"f="<<f<<endl;
        int mk=0;
        int wk=0;
        int c=1;
        for(int j=0;j<f-1;j++)
        {
            //cout<<"a1[c]="<<a1[c]<<" a1[j]="<<a1[j]<<endl;
            wk=a1[c]-a1[j];
            c++;
           // cout<<"wk="<<wk<<endl;
            if(mk<wk)
            {
                mk=wk;
            }

        }
        //cout<<"mk="<<mk<<endl;
        if(ss>mk)
        {
            ss=mk;
        }

    }
    cout<<ss<<endl;

    return 0;
}
