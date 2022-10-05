#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

       int n;
       char c;
       int sum=0;
       if(i!=t-1)
       {
          cin>>n>>c;
       }
       else
       cin>>n;
       int k=pow(2,n-1);
       //cout<<k<<endl;
       int r=pow(2,n)-1;
       long long tem=r*k;
       //cout<<"tem="<<tem<<endl;
       for(int j=1;j<=tem/2;j++)
       {
          if(tem%j==0)
          {
             sum+=j;

          }

       }
        //cout<<"sum="<<sum<<endl;
        if(sum<=tem)
            {
               cout<<"Yes"<<endl;

            }
            else
            {

               cout<<"No"<<endl;
            }
    }


    return 0;
}
