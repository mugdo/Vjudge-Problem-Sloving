#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ar[15][15];
    int x=0,y=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>ar[i][j];
            //cout<<"ss";

        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {

            if(ar[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }
    int p=0;
    p=3-x;
    int q=0;
    q=3-y;
    //cout<<"p="<<p<<" q="<<q<<endl;
    if(p<0)
    {
        p=p*(-1);
    }
    if(q<0)
    {
        q=q*(-1);
    }
    cout<<p+q<<endl;
     return 0;
}
