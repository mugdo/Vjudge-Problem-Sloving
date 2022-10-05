#include<bits/stdc++.h>
using namespace std;
int main()
{

  long long n,k;
  while(cin>>n>>k)
  {
      long long sum=0;
      if(n<=k)
      {
          cout<<"10"<<endl;
      }
      else
      {
          long long extra=0;
          extra=n/k;
          sum=k*5*extra;
          if(n%k!=0)
          {
              sum+=10;
          }
          cout<<sum<<endl;
      }

  }

   return 0;
}
