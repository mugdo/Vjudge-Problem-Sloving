#include<bits/stdc++.h>
using namespace std;
int ar[1000010];
int main()
{
    //freopen("in1.txt","r",stdin);
    //freopen("out1.txt","w",stdout);
    //cout<<"ss";
    memset(ar,0,sizeof(ar));
    for(int i=2;i<=1000000;i++)
    {
        if(ar[i]!=1)
        {
            ar[i]=0;
            for(int j=i*2;j<=1000000;j=j+i)
            {
                ar[j]=1;
            }
        }
    }
    int n;
    while(cin>>n)
    {
        int con=0;
        if(n==0)
        {
            break;
        }
        for(int i=2;i<n;i++)
        {
            if(ar[i]==0)
            {
                if(n%i==0)
                {
                    con++;
                }
            }
        }
        cout<<n<<" : "<<con<<endl;
    }



    return 0;
}

