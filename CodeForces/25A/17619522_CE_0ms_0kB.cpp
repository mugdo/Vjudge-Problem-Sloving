#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        int q;
        cin>>n>>q;
        int x1,x2,y1,y2,c1,c2;
        int ck=0;
        //int r=q-1;
        //cout<<" q="<<q<<endl;
        if(q==0)
        {
            ck=0;
        }
        else if(q==1)
        {
          cin>>x1>>y1>>c1;
          ck=0;
        }
        else
        {
            for(int j=0;j<q-1;j++)
             {
            x1=0,x2=0,y1=0,y2=0,c1=0,c2=0;
            cin>>x1>>y1>>c1;
            cin>>x2>>y2>>c2;
            int p=0,q=0;
            if(c1==c2)
            {
                p=abs(x1-x2);
                q=abs(y1-y2);
                //cout<<"same:p="<<p<<" q="<<q<<endl;
                if(q%2!=0||p%2!=0)
                {
                   // cout<<"same"<<endl;
                   ck=1;
                }

            }
            else
            {
                 p=abs(x1-x2);
                 q=abs(y1-y2);
                 //cout<<"p="<<p<<" q="<<q<<endl;
                 if(q%2==0||p%2==0)
                {
                   ck=1;
                }
            }

          }
        }

        if(ck==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        ck=0;

    }
    return 0;
}
