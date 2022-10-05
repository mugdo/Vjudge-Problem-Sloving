#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int ar[3];
        for(int j=0;j<3;j++)
        {
            cin>>ar[j];
        }
        sort(ar,ar+3);
        cout<<ar[1]<<endl;
    }

    return 0;
}

