#include<bits/stdc++.h>
using namespace std;
int x=0;
int main()
{
    int n;
    cin>>n;

    int ar[10];
    int i=0;
    int k=0;
    k=n;
    x=n;
    int pk=0;
    int ck=0;
   while(pk!=1)
    {
        x=x+1;
        k=x;
        ck=0;


        //cout<<"k="<<k<<endl;
        for(int p=0;p<4;p++)
            ar[p]=0;




            for(int v=0;v<4;v++)
            {
                int p=0;
                p=k%10;
                ar[v]=p;
                //cout<<"p="<<p<<endl;
                i++;
                k=k/10;
               // cout<<"k="<<k<<endl;
            }
            //cout<<"ss"<<endl;

            if(ar[0]==ar[1]||ar[0]==ar[2]||ar[0]==ar[3]||ar[1]==ar[2]||ar[1]==ar[3]||ar[2]==ar[3])
            {
                ck=1;
            }
            if(ck!=1)
            {
                cout<<x<<endl;
                pk=1;

            }


    }

    return 0;
}
