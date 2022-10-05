#include<bits/stdc++.h>
using namespace std;
struct co
{
   int a;
};
bool operator <(co x,co y)
{

   if(x.a!=y.a)
      return x.a>y.a;
      else
      return x.a<y.a;
}
int main()
{
   int n;
   while(cin>>n)
   {
      if(n==0)
      {
         break;
      }
     priority_queue<co>pq;

      co ar[n];
      co obj;
      for(int i=0;i<n;i++)
      {
        cin>>obj.a;
        pq.push(obj);
      }
      co obj2;
      co obj3;
      co obj4;
      int sum=0;
      queue<int>q;
      while(!pq.empty())
       {
          obj2=pq.top();
          //cout<<"obj2="<<obj2.a<<endl;
          pq.pop();
          obj3=pq.top();
           //cout<<"obj3="<<obj3.a<<endl;
          pq.pop();
          obj4.a=obj2.a+obj3.a;
          //cout<<"obj4="<<obj4.a<<endl;
          if(!pq.empty())
          {
             pq.push(obj4);
          }
          q.push(obj4.a);

       }
       int su=0;
       while(!q.empty())
       {

          su+=q.front();
          q.pop();
       }
       cout<<su<<endl;
   }


    return 0;
}
