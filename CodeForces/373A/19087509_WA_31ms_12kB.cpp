#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    char ar[4][4];
    int ck=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]=='.')
            {
                ck++;
            }
        }
    }
    if(ck<=k+k)
    {
       cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
