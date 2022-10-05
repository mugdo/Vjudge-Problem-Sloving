#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int ar[4];
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        ar[0]=a;
        ar[1]=b;
        ar[2]=c;
        ar[3]=d;
        sort(ar,ar+4);
        if(ar[0]==ar[1]&&ar[2]==ar[3])
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
