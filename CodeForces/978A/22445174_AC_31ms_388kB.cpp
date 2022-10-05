#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    vector<int>vc;
    int br[100000];
    memset(br,0,sizeof(br));
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        br[ar[i]]+=1;
        if(br[ar[i]]==1)
        {
            vc.push_back(ar[i]);
        }
    }
    cout<<vc.size()<<endl;
    for(int i=vc.size()-1;i>0;i--)
    {

        cout<<vc[i]<<" ";
    }
    cout<<vc[0]<<endl;
    return 0;
}
