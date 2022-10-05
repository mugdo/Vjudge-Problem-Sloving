#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+t);
    for(int j=0;j<t;j++)
    {
        cout<<ar[j]<<endl;
    }

    return 0;
}
