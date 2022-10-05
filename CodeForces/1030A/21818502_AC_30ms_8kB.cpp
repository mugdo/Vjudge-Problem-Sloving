#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    int ck=0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
        {
            ck=1;
        }
    }
    if(ck==1)
    {
        cout<<"HARD"<<endl;
    }
    else

    {
        cout<<"EASY"<<endl;
    }
    return 0;
}
