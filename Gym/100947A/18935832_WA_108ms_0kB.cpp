#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long x,g,y,r;
        cin>>x>>g>>y>>r;
        int ck=g+y+r+g;
        for(int j=0;j<=x;j++)
        {
            if(x<g)
            {
                cout<<"GREEN"<<endl;
                break;
            }
            else if(x<g+y)
            {
                cout<<"YELLOW"<<endl;
                break;
            }
            else if(x<g+y+r)
            {
                cout<<"RED"<<endl;
                break;
            }
            else
            {
                g+=ck;
               // cout<<"g="<<g<<endl;
            }

        }
    }
    return 0;
}
