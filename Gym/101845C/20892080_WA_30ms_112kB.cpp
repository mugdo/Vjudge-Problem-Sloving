#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.size();
    //int len2=s2.size();
    int n;
    cin>>n;
    int ar[130][130];
    for(int i=0;i<=126;i++)
    {
        for(int j=0;j<=126;j++)
        {
            if(i!=j)
            ar[i][j]=99999;
            else
            {
                ar[i][j]=0;
            }
        }
    }

    char a,b;
    int c;
    int p,q;
    int mk=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        p=a-'0'+48;
        q=b-'0'+48;
       // cout<<"p="<<p<<"  q="<<q<<endl;
         ar[p][q]=min(c,ar[p][q]);
         //cout<<"ar["<<p<<"]["<<q<<"]="<<ar[p][q]<<endl;

    }
     for(int k=33;k<=126;k++)
        {
            for(int i=33;i<=126;i++)
            {
                for(int j=33;j<=126;j++)
                {
                    ar[i][j]=min(ar[i][j],ar[i][k]+ar[k][j]);
                    //cout<<"ss"<<endl;
                }
            }
        }
    int sum=0;
    int k1,k2;
    for(int i=0;i<len1;i++)
    {
       // cout<<"s1[i]="<<s1[i]<<"  s2[i]="<<s2[i]<<endl;

           k1=s1[i]-'0'+48;
           k2=s2[i]-'0'+48;
            //cout<<"ar["<<k1<<"]["<<k2<<"]="<<ar[k1][k2]<<endl;
            sum+=ar[k1][k2];
            k1=0;
            k2=0;


    }
    if(sum>=99999)
    {
        cout<<"-1"<<endl;
    }
    else
    cout<<sum<<endl;
    return 0;
}
