#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int ar[m];
        for(int j=0;j<m;j++)
        {
            cin>>ar[j];
        }
        int con=0;
        for(int i=1;i<n;i++)
        {
            for(int k=0;k<m;k++)
            {
                if(i%ar[k]==0)
                {
                    //cout<<"i="<<i<<endl;
                     //cout<<ar[k]<<endl;
                     con++;
                     break;
                }
               //cout<<endl;
            }
            //cout<<"ss"<<endl;
        }
        cout<<con<<endl;
    }
    return 0;
}
