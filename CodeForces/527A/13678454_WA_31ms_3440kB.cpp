#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ck=0;
    int con=0;
    int pk=0;
    if(b==1)
    {
        cout<<a<<endl;
        return 0;
    }

    while(b!=1)
    {
      a=a-b;
      con+=1;
      //cout<<a<<" "<<b<<endl;
      if(b>a)
      {
          int temp=a;
          a=b;
          b=temp;

      }
      pk=a;


    }
    cout<<con+pk<<endl;
    return 0;
}

