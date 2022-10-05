#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int p=0,f=0;
        cin>>p>>f;
        int con=0;
        while(1)
        {
            if(p==f)
            {
                break;
            }
            else
            {
                if(f>p)
                {
                    f=f-1;
                    con+=4;
                }
                else
                {
                    f=f+1;
                    con+=4;
                }
            }
        }
        //cout<<"con="<<con<<endl;
        con+=11;
        while(1)
        {
            if(f==0)
            {
                break;
            }
            else
            {
                f--;
                con+=4;
            }
        }
        con+=8;
        cout<<"Case "<<i+1<<": "<<con<<endl;
    }
    return 0;
}
