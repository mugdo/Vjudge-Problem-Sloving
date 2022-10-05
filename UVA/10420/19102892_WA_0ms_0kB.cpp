#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    int ar[100];

    for(int i=0;i<=100;i++)
    {
        ar[i]=0;
    }
    int p=0;

    cin>>n;
    getchar();
     string s;
    for(int i=0;i<n;i++)
    {
        //cout<<"i="<<i<<endl;

        getline(cin,s);
        p=s[0]-64;
        //cout<<"p="<<p<<endl;
        ar[p]+=1;
        s="";

    }
    for(int i=0;i<=26;i++)
    {
        if(ar[i]!=0&&i==5)
        {
            cout<<"England "<<ar[i]<<endl;
        }
        else if(ar[i]!=0&&i==6)
        {
            cout<<"France "<<ar[i]<<endl;
        }
        else if(ar[i]!=0&&i==7)
        {
            cout<<"Germany "<<ar[i]<<endl;
        }
        else if(ar[i]!=0&&i==12)
        {
            cout<<"Italy "<<ar[i]<<endl;
        }
        else if(ar[i]!=0&&i==19)
        {
            cout<<"Spain "<<ar[i]<<endl;
        }
        else if(ar[i]!=0&&i==6)
        {
            cout<<"Turky "<<ar[i]<<endl;
        }
    }
    return 0;
}
