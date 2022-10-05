#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {

        string s;
        getline(cin,s);
        int n,q;
        scanf("%d%d",&n,&q);
        int ar[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        int len=log2(n);
        int mar[n][len];
        for(int p=0;p<n;p++)
        {
            mar[p][0]=ar[p];
            //cout<<"mar[p][0]="<<mar[p][0]<<endl;
        }
        int ck=1;
        int sum=0;
        int con=n;
        for(int k=0;k<len;k++)
        {
            sum=0;
            for(int p=0;p<con-ck;p++)
            {
                sum++;
                //cout<<"p="<<p<<endl;
               // cout<<"mar[p][k]="<<mar[p][k]<<"  mar[p+ck][k]= "<<mar[p+ck][k]<<endl;
                mar[p][k+1]=min(mar[p][k],mar[p+ck][k]);
                //cout<<"mar[p][k+1]="<<mar[p][k+1]<<endl;
            }
            ck=ck*2;
            con=sum;

           // cout<<"con="<<con<<endl;
           // cout<<endl;
        }
        //cout<<"position="<<mar[2][3]<<endl;
        int mn;
         cout<<"Case "<<j+1<<":"<<endl;
        for(int d=0;d<q;d++)
        {
            int p1,p2;
            scanf("%d%d",&p1,&p2);
            int ss=p2-p1+1;
            //cout<<"ss="<<ss<<endl;
             mn=10000000;
            while(ss>0)
            {
                int poss=log2(ss);
                //cout<<"poss="<<poss<<endl;
                ss-=pow(2,poss);
                //cout<<"mar["<<p1-1<<"]["<<poss<<"]="<<mar[p1-1][poss]<<endl;
                mn=min(mn,mar[p1-1][poss]);
                p1+=pow(2,poss);



            }
             cout<<mn<<endl;

        }
    }

    return 0;
}
/*
10
9 10 1 7 6 3 5 2 4 11

*/
