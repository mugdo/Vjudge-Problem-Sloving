#include<bits/stdc++.h>
using namespace std;
struct st
{

   int a;
   int pos;
};
struct prin
{
   int p;
};
bool operator < (prin x,prin y)
{
   if(x.p!=y.p)
   {

      return x.p<y.p;
   }
   else
   return x.p>y.p;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int n,m;
      cin>>n>>m;
      st temp;
      queue<st>q;
      int a[n];
      priority_queue<prin>pq;
      prin temp1;
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
         temp.a=a[i];
         temp.pos=i;
         temp1.p=a[i];
         q.push(temp);
         pq.push(temp1);

      }
      st temp2;
      int con=0;
      while(!q.empty())
          {
            if(q.front().a!=pq.top().p)
            {
               temp2.a=q.front().a;
               temp2.pos=q.front().pos;
               q.pop();
               q.push(temp2);
            }
            else
            {
               if(q.front().pos==m)
               {

                  break;
               }
               con++;
               q.pop();
               pq.pop();

            }

            //cout<<"pt.top().p="<<pt.top().p<<endl;
            //cout<<"pt.top().pos=="<<pt.top().pos<<endl;

//            if(pt.top().pos==m)
//            {
//              break;
//            }


         }
        //q.pop();
        cout<<con+1<<endl;

      }




    return 0;
}
