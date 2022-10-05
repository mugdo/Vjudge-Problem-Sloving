#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int T=0;T<t;T++)
    {
        string s;
        getline(cin,s);
        int n,q;
        cin>>n>>q;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        cout<<"Case "<<T+1<<":"<<endl;
        while(q--)
        {
            int i,j,nn;
            cin>>i>>j;
            nn=j-i+1;
           // cout<<"nn="<<nn<<endl;
            n=nn;
            int mk=10000000;
            while(n>0)
            {
                int len=log2(n);
               // cout<<"len="<<len<<endl;
                int mar[n][len];
                if(len==0)
                {
                    mk=min(mk,ar[j-1]);
                    break;
                }
                for(int p=i-1;p<j;p++)
                {
                    mar[p][0]=ar[p];
                }
                int sum=1;
                for(int s=1;s<=len;s++)
                {
                   sum*=2;
                }
                n-=sum;
                int ck=1;
                int pk=0;
                //cout<<"sum="<<sum<<endl;
                for(int k=0;k<len;k++)
                {
                   // cout<<"k="<<k<<endl;
                    for(int p=i-1;p<i+sum-ck-1;p++)
                    {

                       // cout<<"mar[p][k]="<<mar[p][k]<<"  mar[p+ck][k]= "<<mar[p+ck][k]<<endl;
                        mar[p][k+1]=min(mar[p][k],mar[p+ck][k]);
                       // cout<<"mar[p][k+1]="<<mar[p][k+1]<<endl;
                        pk=mar[p][k+1];
                       // p=p+ck;

                    }
                    ck++;
                    //cout<<endl;
                }
                //cout<<"mk="<<mk<<" pk="<<pk<<endl;
                if(mk>pk)
                {
                    mk=pk;
                   // cout<<"mk=="<<mk<<endl;
                }
            }
            cout<<mk<<endl;

        }


    }

    return 0;
}
