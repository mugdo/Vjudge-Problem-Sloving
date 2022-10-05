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
        if(a>10)
        {
            cout<<a-10<<" "<<"10"<<endl;
        }
        else
        cout<<"0 "<<a<<endl;
    }

    return 0;
}
