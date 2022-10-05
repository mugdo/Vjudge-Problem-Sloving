#include<bits/stdc++.h>
using namespace std;
int ar[1000000+10];
int main()
{


    for(int i=2;i<1299709;i++)
    {
        if(ar[i]==0)
        {
            for(int j=i*2;j<1299709;j=j+i)
                ar[j]=1;
        }
    }
    int k;
    while(cin>>k)
    {
      if(k==0)
        break;
      if(ar[k]==1)
        cout<<"0"<<endl;
      else
      {
          int res=0;
          for(int i=k+1;k<=1299709;i++)
          {

              res++;
              if(ar[i]==0)
                break;
          }
          //cout<<"res="<<res<<endl;
           for(int i=k;k>=1;i--)
          {
              if(ar[i]==0)
                break;
              res++;
          }
          cout<<res<<endl;
      }
    }


    return 0;
}
