#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int p;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        if(p>k)
        {
           flag++;
        }
    }
    cout<<flag<<endl;

    return 0;
}
