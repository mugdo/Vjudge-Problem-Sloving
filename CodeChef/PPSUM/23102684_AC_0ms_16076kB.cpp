#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int sum=0,con=0;
        con=b;

        for(int j=0;j<a;j++)
        {
           for(int k=1;k<=con;k++)
           {
               sum+=k;
           }
           con=sum;
           sum=0;
        }
        cout<<con<<endl;

    }
    return 0;
}
