#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    int ss=0;
    int ck=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int b=0;
        flag+=25;
        if(ar[i]!=25)

        {

            b=ar[i]-25;
            flag=flag-b;
           // cout<<"flag="<<flag<<"b="<<b<<endl;



        }
        if(flag<=0&&ar[i+1]!=25)
        {
            cout<<"NO"<<endl;
            ck=1;
            break;
        }
    }
    if(ck==0)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
