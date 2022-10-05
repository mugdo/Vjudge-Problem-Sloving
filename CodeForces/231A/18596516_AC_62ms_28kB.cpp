#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    int flag=0,con=0;
    for(int i=0;i<n;i++)
    {
       cin>>a>>b>>c;
       if(a==1)
       {
           con++;
       }
       if(b==1)
       {
           con++;
       }
       if(c==1)
       {
           con++;
       }
       if(con>=2)
       {
           flag++;
       }
       con=0;
       a=0,b=0,c=0;
    }
    cout<<flag<<endl;
    return 0;
}
