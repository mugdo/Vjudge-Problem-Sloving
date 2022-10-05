#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n;
    int cas=0;
    while(cin>>r>>n)
    {
        cas++;
        if(r==0||n==0)
            break;
            int con=0;
            con=n;
            int rk=0;
            if(r<=n)
            {
               cout<<"Case"<<" "<<cas<<":"<<" "<<"0"<<endl;
               rk=1;

            }

            int p=0;
            int ck=0;
        for(int i=0;i<26;i++)
        {
            if(rk==1)
                break;
            p++;

            for(int j=0;j<n;j++)
            {
                //cout<<"j="<<j<<endl;

                con++;


            }
              if(con>=r)
                {
                    cout<<"Case"<<" "<<cas<<":"<<" "<<p<<endl;
                    ck=1;
                    break;
                }
        }
        if(ck==0&&rk!=1)
        {
            cout<<"Case"<<" "<<cas<<":"<<" "<<"impossible"<<endl;
        }
    }
    return 0;
}
