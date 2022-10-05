#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        int ck1=0;
        int ck2=0;
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
            if(ck1!=1)
            {
               cout<<"I hate it"<<endl;
               break;
            }
            else
            {
                cout<<"I love it";
                break;
            }

        }
        ck1=0;
        ck2=0;
      if(i%2!=0)
      {
          cout<<"I hate that"<<" ";
          ck1=1;
      }
      else
      {
          cout<<"I love that"<<" ";
          ck2=1;
      }


    }
}
