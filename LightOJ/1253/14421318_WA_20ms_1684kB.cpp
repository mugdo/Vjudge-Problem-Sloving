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
        int ar[k];

        for(int j=0;j<k;j++)
        {
            cin>>ar[j];



        }

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
            cout<<"Case"<<" "<<i<<":"<<" "<<"Alice"<<endl;
        }
        else
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"Bob"<<endl;
        }

    }

    return 0;
}
