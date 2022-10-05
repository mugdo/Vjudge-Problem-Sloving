#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int ar1[n];
    int con=0;
    for(int i=1;i<=n;i++)
    {
        ar[i]=i;
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
        {
            for(int k=1;k<=n;k++)
            {
                ar[k]=0;

            }
        }


    }
    //int con=0;
    for(int i=1;i<=n;i++)
    {
        if(ar[i]!=0)
        {
            con+=1;
        }

    }
    cout<<con<<endl;
    return 0;
}
