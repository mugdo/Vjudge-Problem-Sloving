#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int ev=0;
    int od=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)
        {
            ev+=1;
        }
        else
        {
            od+=1;
        }
    }
    if(ev==1)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2==0)
            {
                cout<<i+1;
            }
        }
    }
    else if(od==1)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2!=0)
            {
                cout<<i+1;
            }
        }
    }


    return 0;
}
