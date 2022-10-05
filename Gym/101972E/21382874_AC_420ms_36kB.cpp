#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n,m,k;
       cin>>n>>m>>k;
       int ar[n+10];
       char temp;
       for(int j=0;j<n;j++)
       {
           cin>>temp;
           if(temp=='S')
           {
               ar[j+1]=1;
           }
           else
           {
               ar[j+1]=2;
           }
       }
       int sub=0;
       char problem;
       int num=0;
       string s;
       for(int p=0;p<m;p++)
       {

          cin>>problem;
          if(problem=='W')
          {
              cin>>num;
              if(num<=k)
              {
                  //cout<<"ar[num]="<<ar[num]<<endl;
                  if(ar[num]==1)
                  {
                      sub++;
                  }
              }
              else
              {
                  k=num;
              }
          }
          else
          {
              k=n;
          }

          //cout<<"sum="<<sub<<" k="<<k<<endl;
       }
       cout<<sub<<endl;
    }
    return 0;
}
