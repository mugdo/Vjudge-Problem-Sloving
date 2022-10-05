#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,x,y;
        cin>>n>>x>>y;
        long long mid=0;
        mid=n/2;
       // cout<<"ss"<<endl;
       
        if(n%2!=0)
        {
             if(x>=mid+1&&y>=mid)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
       

    }

   return 0;
}
