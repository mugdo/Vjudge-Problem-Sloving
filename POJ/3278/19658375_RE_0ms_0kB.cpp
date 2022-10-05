#include<iostream>
#include<queue>
using namespace std;
int vis[100000]={0};
int dis[100000]={0};
void catc(int n,int k)
{

   queue<int>q;
   q.push(n);
   vis[n]=1;
   dis[n]=0;
   int ar[5]={1,-1,n};
   while(!q.empty())
   {
      int fon=q.front();
      q.pop();
      if(fon==k)
      {
         break;
      }
      for(int i=0;i<3;i++)
      {
         if(vis[fon+ar[i]]!=1)
         {
             q.push(fon+ar[i]);
             vis[fon+ar[i]]=1;
             dis[fon+ar[i]]=dis[fon]+1;

         }

      }
   }
   cout<<dis[k]<<endl;

}
int main()
{

    int n,k;
    cin>>n>>k;
    catc(n,k);

    return 0;
}
