#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,d;
        cin>>n>>d;
        long long con=1,flag=0,sum=0,ck=0;
        if(d<=n)
        {
            ck=1;
        }
        else
        {
           while(con<=((n/2)+1))
            {
                if(d%(con+1)==0)
                {
                    flag=(d/(con+1))+con;
                }
                else
                {
                    flag=(d/(con+1))+1+con;
                }
                //cout<<"flag="<<flag<<endl;
                if(flag<=n)
                {
                    ck=1;
                    break;
                }

                con++;
            }
        }

        if(ck==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
