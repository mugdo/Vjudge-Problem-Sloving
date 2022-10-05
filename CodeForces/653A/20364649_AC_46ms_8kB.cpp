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
    sort(ar,ar+n);
    int br[n];
    int ck=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==ar[i+1])
        {

        }
        else
        {
            br[ck]=ar[i];
            ck++;
        }

    }
    int pk=0;
    int rk=0;
    for(int i=0;i<ck;i++)
    {
        if(br[i]+1==br[i+1])
        {
           // cout<<"br[i]+1="<<br[i]<<"  br[i+1]="<<br[i+1]<<endl;
            pk++;
            if(pk==2)
            {
                rk=1;
                break;
            }
        }
        else
        {
            pk=0;
        }
    }
    if(rk==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
