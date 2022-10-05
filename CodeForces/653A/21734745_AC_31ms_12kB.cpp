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
    int br[n];
    int ck=0;
    sort(ar,ar+n);
     for(int i=0;i<n;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            br[ck]=ar[i];
            ck++;
        }
    }

    int flag=0;
    for(int i=0;i<ck;i++)
    {
        if((br[i]+1==br[i+1])&&(br[i]+2==br[i+2]))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
