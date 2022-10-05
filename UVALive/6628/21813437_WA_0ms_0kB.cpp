#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ab,ac,bd;
    cin>>ab>>ac>>bd;
    int temp=0;
    temp=ab*ac;
    int k=0;
    k=bd-ac;
    if(temp%k==0)
    {
       cout<<temp/k<<"/"<<1<<endl;
    }
    else

    {
            cout<<temp<<"/"<<k<<endl;
    }

    return 0;
}
