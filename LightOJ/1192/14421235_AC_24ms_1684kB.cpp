#include<bits/stdc++.h>
using namespace std;
//conb(ar[j]);

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int k;
        cin>>k;
        //int p=k*2;
        int ar[k];
        //string s[k];
        for(int j=0;j<k;j++)
        {
            int a,b;
            cin>>a>>b;
            ar[j]=(b-a)-1;
           //cout<<"ar[j]="<<ar[j]<<endl;
           //conb(ar[j]);



        }
        int s;
        int ss=0;
        for(int c=0;c<k;c++)
        {
            ss^=ar[c];
           // ss=ss^s;
            //c++;

        }
        //cout<<"ss="<<ss<<endl;
        if(ss==0)
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"Bob"<<endl;
        }
        else
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"Alice"<<endl;
        }

    }

    return 0;
}
