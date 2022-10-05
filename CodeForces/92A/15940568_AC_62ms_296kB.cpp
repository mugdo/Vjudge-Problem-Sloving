#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;

    int ck=0;
    while(1)
    {
        for(int i=1;i<=n;i++)
        {
            if(m>=i)
            {

                m=m-i;
                //cout<<"m="<<m<<endl;
            }
            else
            {
                ck=1;
                break;
            }
            if(m==0)
            {
                ck=1;
                break;
            }


        }
        if(ck==1)
            break;
    }
    cout<<m<<endl;
    return 0;
}
