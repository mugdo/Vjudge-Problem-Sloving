#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int digree=0;
        if(n==0)
            break;
        else
        {
            int thisyear[n];
            int r1[n];
            int lestyer[n];
            int r2[n];
            int expection[n];
            int r3[n];
            for(int i=1;i<=n;i++)
            {
                int a=0;
                cin>>a;
                thisyear[i]=a;
                r1[a]=i;

            }
            for(int i=1;i<=n;i++)
            {
                int a=0;
                cin>>a;
                lestyer[i]=a;
                r2[a]=i;

            }
            for(int i=1;i<=n;i++)
            {
                int a=0;
                cin>>a;
                expection[i]=a;

            }

            for(int k=1;k<=n;k++)
            {
              //cout<<"expection[k]="<<expection[k]<<" r1[k]="<<r1[k]<<endl;
              if(expection[k]>=r1[k])
              {
                  digree+=3;
              }
              else
              {
                  //cout<<"tem="<<tem<<endl;
                  int tem=0;
                  tem=r2[k];
                  //cout<<"tem="<<tem<<endl;
                  if(tem>r1[k])
                  {
                      digree+=2;
                  }
                  else
                  {
                      digree+=1;
                  }
              }
              //cout<<"digree="<<digree<<endl;


            }


        }
        cout<<digree<<endl;

    }

    return 0;
}
