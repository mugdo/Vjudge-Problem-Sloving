#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;

        if(a%2==0)
            cout<<"Bad"<<endl;
        else
            cout<<"Balanced"<<endl;
    }
    return 0;
}
