#include<bits/stdc++.h>
using namespace std;
struct  st
{
    int p;
    long long first_wet;
    long long seceond_wet;
};
bool operator < (st x,st y)
{
    if(x.first_wet!= y.first_wet)
        return x.first_wet>y.first_wet;
    else
       return  x.seceond_wet>y.seceond_wet;

}
int diskta(int sorce,int n,vector<int>v[5010],vector<int>wt[5010],pair<int,int>dis[5010])
{
   long long int infinity=99999999999999LL;
   for(int i=0;i<=5010;i++)
   {
       dis[i].first=infinity;
       dis[i].second=infinity;
       //cout<<"dis["<<i<<"].first="<<dis[i].first<<endl;

   }
   dis[sorce].first=0;
   priority_queue<st>pq;
   st obj;
   obj.first_wet=dis[sorce].first;
   obj.seceond_wet=infinity;
   obj.p=sorce;
   pq.push(obj);
   int con=0;
   while(!pq.empty())
   {
       st ob;
       ob=pq.top();
       pq.pop();
       for(int i=0;i<v[ob.p].size();i++)
       {
          // cout<<"dis["<<v[ob.p][i]<<"]="<<dis[v[ob.p][i]].first<<" dis["<<ob.p<<"]="<<dis[ob.p].first<<" wet["<<ob.p<<"]["<<v[ob.p][i]<<"]="<<wet[ob.p][v[ob.p][i]]<<"  dis["<<ob.p<<"].second="<<dis[ob.p].second<<endl;
           //cout<<"dis["<<v[ob.p][i]<<"]="<<dis[v[ob.p][i]].second<<endl;
          // cout<<"************************"<<endl;
           if(dis[v[ob.p][i]].first>(dis[ob.p].first+wt[ob.p][i]))
           {
              long long oldVlue= dis[v[ob.p][i]].first;
              dis[v[ob.p][i]].first=(dis[ob.p].first+wt[ob.p][i]);
              dis[v[ob.p][i]].second=oldVlue;
              //cout<<"dis["<<v[ob.p][i]<<"].first="<<dis[v[ob.p][i]].first<<endl;
              //cout<<"dis["<<v[ob.p][i]<<"].second="<<dis[v[ob.p][i]].second<<endl;
              st op;
              op.p=v[ob.p][i];
              op.first_wet=dis[v[ob.p][i]].first;
              op.seceond_wet=oldVlue;
              pq.push(op);
           }
           else if(dis[v[ob.p][i]].second>(dis[ob.p].first+wt[ob.p][i])&&dis[v[ob.p][i]].first<(dis[ob.p].first+wt[ob.p][i]))
           {
                st obj2;
                obj2.p=v[ob.p][i];
                dis[v[ob.p][i]].second=(dis[ob.p].first+wt[ob.p][i]);
                obj2.seceond_wet=dis[v[ob.p][i]].second;
                obj2.first_wet=dis[v[ob.p][i]].first;
                pq.push(obj2);
                //cout<<"222222dis["<<v[ob.p][i]<<"].second="<<dis[v[ob.p][i]].second<<endl;
            }
            else if(dis[v[ob.p][i]].second>(dis[ob.p].second+wt[ob.p][i])&&dis[v[ob.p][i]].first<(dis[ob.p].second+wt[ob.p][i]))
            {
                st obj2;
                obj2.p=v[ob.p][i];
                dis[v[ob.p][i]].second=(dis[ob.p].second+wt[ob.p][i]);
                obj2.seceond_wet=dis[v[ob.p][i]].second;
                obj2.first_wet=dis[v[ob.p][i]].first;
                pq.push(obj2);
               // cout<<"222222dis["<<v[ob.p][i]<<"].second="<<dis[v[ob.p][i]].second<<endl;
            }


           }

       }


  return dis[n].second;
}
int main()
{
    int t;
    cin>>t;
    for(int T=0;T<t;T++)
    {
        vector<int>v[5010];
        vector<int>wt[5010];
        pair<int,int>dis[5010];
        int n,r;
        cin>>n>>r;
        int a,b,w;
        for(int i=0;i<r;i++)
        {
            cin>>a>>b>>w;
            v[a].push_back(b);
            v[b].push_back(a);
            wt[a].push_back(w);
            wt[b].push_back(w);

        }
        cout<<"Case "<<T+1<<": "<<diskta(1,n,v,wt,dis)<<endl;


    }
    return 0;

}
