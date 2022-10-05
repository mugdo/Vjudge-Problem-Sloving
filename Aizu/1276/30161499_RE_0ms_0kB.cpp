#include<bits/stdc++.h>
using namespace std;
int ar[1000000];
int main()
{

    for(int i=2;i<1000000;i++)
    {
        ar[i]=1;
    }

    for(int i=2;i<1000000;i++)
    {
        if(ar[i]==1)
        {
            for(int j=i*2;j<1000000;j=j+i)
                ar[j]=0;
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
          for(int i=k+1;k<=1000000;i++)
          {

              res++;
              if(ar[i]==1)
                break;
          }
          //cout<<"res="<<res<<endl;
           for(int i=k;k>=1;i--)
          {
              if(ar[i]==1)
                break;
              res++;
          }
          cout<<res<<endl;
      }
    }


    return 0;
}
