#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int low=10000000;
    int hig=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<low)
        {
            low=ar[i];
        }
        if(ar[i]>hig)
        {
            hig=ar[i];
        }
    }
    if(n==1)
    {
        cout<<"Ooops!"<<endl;
    }
    else
    {
        cout<<low<<" "<<hig<<endl;
    }
    return 0;
}
