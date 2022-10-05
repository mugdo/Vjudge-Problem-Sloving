#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a,flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%k==0)
        {
           flag++;
        }

    }
    cout<<flag<<endl;
    return 0;
}