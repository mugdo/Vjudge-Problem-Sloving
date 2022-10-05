#include<bits/stdc++.h>
using namespace std;
long long ar[10000000];
int main()
{
    string s;
    int ck=1;
    while(cin>>s)
    {

        int len=s.size();
        if(len==0)
        {
            break;
        }
        long long temp1=0;
        string temp2;
        memset(ar,0,sizeof(ar));
        for(int i=0;i<len;i++)
        {
            ar[i]=s[i]-'0';

        }
        for(int i=1;i<len;i++)
        {
            temp1=ar[i-1]+ar[i];
            ar[i]=temp1;

        }
        int n;
        cin>>n;
        int p,q;
        long long sum=0;
        cout<<"Case "<<ck<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>p>>q;
            if(q>p)
            {
                if(p>0)
                {
                    sum=ar[q]-ar[p-1];
                }
                else
                {
                    sum=ar[q];
                }
            }
            else
            {
                if(q>0)
                {
                    sum=ar[p]-ar[q-1];
                }
                else
                {
                    sum=ar[p];
                }
            }
           // cout<<"sum="<<sum<<" abs(p-q)="<<abs(p-q)+1<<endl;
            if(sum==0||sum==abs(p-q)+1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            sum=0;

        }
        ck++;

    }
    return 0;
}
