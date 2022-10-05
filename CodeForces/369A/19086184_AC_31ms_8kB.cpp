#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ar[n];
    int one=0;
    int two=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }

    }
    //cout<<"one="<<one<<" two="<<two<<endl;
    int ws=0;
    if(one>=m)
    {
        ws+=one-m;
    }
    else
    {
        k+=m-one;
    }
    //cout<<"k="<<k<<endl;
    if(two>=k)
    {
        ws+=two-k;
    }
    cout<<ws<<endl;


    return 0;
}
