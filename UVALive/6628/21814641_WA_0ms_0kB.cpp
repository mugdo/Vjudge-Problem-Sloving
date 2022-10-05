#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ab,ac,bd;
    cin>>ab>>ac>>bd;
    long long  temp=0;
    temp=ab*ac;
    long long k=0;
    k=bd-ac;
    //cout<<"temp="<<temp<<" k="<<k<<endl;
    int sum=0;
    for(int i=min(temp,k);i>=1;i--)
    {
      if(temp%i==0&&k%i==0)
      {
          sum=i;
          break;
      }
    }
    cout<<temp/sum<<"/"<<k/sum<<endl;




    return 0;
}


