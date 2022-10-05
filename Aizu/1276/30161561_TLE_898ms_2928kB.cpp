#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    return flag;
}
int main()
{



    int k;
    while(cin>>k)
    {
      if(k==0)
        break;
      if(isprime(k)==1)
        cout<<"0"<<endl;
      else
      {
          int res=0;
          for(int i=k+1;k<=1299709;i++)
          {

              res++;
              if(isprime(i)==1)
                break;
          }
          //cout<<"res="<<res<<endl;
           for(int i=k;k>=1;i--)
          {
              if(isprime(i)==1)
                break;
              res++;
          }
          cout<<res<<endl;
      }
    }


    return 0;
}
