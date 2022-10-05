#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
      if(n==0)
      {
        break;
      }
      queue<int>q;
      for(int i=1;i<=n;i++)
      {
         q.push(i);
      }
      int ar[1000];
      int flag=0;
      while(!q.empty())
      {
        int fon=q.front();
        ar[flag]=fon;
        flag++;
        q.pop();
        int fon2=q.front();
        q.push(fon2);
        q.pop();

      }
      if(n==1)
      {
         cout<<"Discarded cards:";
      }
      else
      cout<<"Discarded cards: ";
      for(int i=0;i<flag-1;i++)
      {
        cout<<ar[i];
        if(i!=(flag-2))
         cout<<", ";
      }
      cout<<endl;
      cout<<"Remaining card: "<<ar[flag-1]<<endl;

    }

    return 0;
}
