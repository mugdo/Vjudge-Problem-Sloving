#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int con=0;
     for(int i=0;i<n;i++)
    {
        int ck1=0,ck2=0;
        if(ar[i]=='<')
        {
            if(i==0)
            {
                con+=1;
               // break;
            }
            else if(i-1<=0)
            {
                for(int j=i-1;j>=0;j--)
                {
                    if(ar[j]=='>')
                    {
                        ck1=1;
                        break;
                    }
                }
                if(ck1==0)
                {
                    con+=1;
                }
            }
           // cout<<"con="<<con<<endl;
        }
        if(ar[i]=='>')
        {
            if(i==n-1)
            {
                con+=1;
            }
            else if(i!=n-1)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(ar[j]=='<')
                    {
                        ck2=1;
                        break;
                    }
                }
                if(ck2==0)
                {
                    con+=1;
                }
            }
        }
    }
    cout<<con<<endl;



    return 0;
}
