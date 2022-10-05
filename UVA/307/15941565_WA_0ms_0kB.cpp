
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        return 0;
    }
    int ar[n];
    int ck=0;
    int big=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ck==0)
        {
          big=ar[i];
          ck=1;
        }
        else
        {
            if(big<ar[i])
            {
                big=ar[i];
            }
        }

    }

    cout<<big+1<<endl;

    return 0;
}
