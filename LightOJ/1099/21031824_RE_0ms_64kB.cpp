#include<bits/stdc++.h>
using namespace std;
int wet[5000][5000];
int vis[100];
pair<int,int>dis[510000];
//int dis[100]={99999999};
struct  st
{
    int p;
    int w;
    int seceond_wet;
};
bool operator < (st x,st y)
{
    if(x.w!= y.w)
        return x.w>y.w;
    else
       return  x.seceond_wet>y.seceond_wet;

}
int diskta(int sorce,int n,vector<int>v[50010], vector<int>wt[50010])
{
   for(int i=0;i<10;i++)
   {
       vis[i]=0;
       dis[i].first=999999;
       dis[i].second=999999;
       //cout<<"dis["<<i<<"].first="<<dis[i].first<<endl;

   }
   //cout<<"2="<<dis[2].first<<endl;
   vis[sorce]=1;
   dis[sorce].first=0;
   priority_queue<st>pq;
   st obj;
   obj.w=dis[sorce].first;
   obj.seceond_wet=999999;
   obj.p=sorce;
   pq.push(obj);
   int con=0;
   //cout<<"2="<<dis[2].first<<endl;
   //cout<<"ss"<<endl;
   while(!pq.empty())
   {
       st ob;
       ob=pq.top();
       //cout<<"pop="<<ob.p<<endl;
       pq.pop();
       for(int i=0;i<v[ob.p].size();i++)
       {
           //cout<<"dis["<<v[ob.p][i]<<"]="<<dis[v[ob.p][i]].first<<" dis["<<ob.p<<"]="<<dis[ob.p].first<<" wet["<<ob.p<<"]["<<v[ob.p][i]<<"]="<<wet[ob.p][v[ob.p][i]]<<"  dis["<<ob.p<<"].second="<<dis[ob.p].second<<endl;
           //cout<<"dis["<<v[ob.p][i]<<"]="<<dis[v[ob.p][i]].second<<endl;
          // cout<<"************************"<<endl;
           if(dis[v[ob.p][i]].first>(dis[ob.p].first+wt[ob.p][i]))
           {
              int oldVlue= dis[v[ob.p][i]].first;
              dis[v[ob.p][i]].first=(dis[ob.p].first+wt[ob.p][i]);
              dis[v[ob.p][i]].second=oldVlue;
              //cout<<"dis["<<v[ob.p][i]<<"].first="<<dis[v[ob.p][i]].first<<endl;
              //cout<<"dis["<<v[ob.p][i]<<"].second="<<dis[v[ob.p][i]].second<<endl;
              st op;
              op.p=v[ob.p][i];
              op.w=dis[v[ob.p][i]].first;
              op.seceond_wet=oldVlue;
              pq.push(op);
           }
           else if(dis[v[ob.p][i]].second>(dis[ob.p].first+wt[ob.p][i])&&dis[v[ob.p][i]].first<(dis[ob.p].first+wt[ob.p][i]))
           {
                st obj2;
                obj2.p=v[ob.p][i];
                dis[v[ob.p][i]].second=(dis[ob.p].first+wt[ob.p][i]);
                obj2.seceond_wet=dis[v[ob.p][i]].second;
                obj2.w=dis[v[ob.p][i]].first;
                pq.push(obj2);
                //cout<<"222222dis["<<v[ob.p][i]<<"].second="<<dis[v[ob.p][i]].second<<endl;
            }
            else if(dis[v[ob.p][i]].second>(dis[ob.p].second+wt[ob.p][i])&&dis[v[ob.p][i]].first<(dis[ob.p].second+wt[ob.p][i]))
            {
                st obj2;
                obj2.p=v[ob.p][i];
                dis[v[ob.p][i]].second=(dis[ob.p].second+wt[ob.p][i]);
                obj2.seceond_wet=dis[v[ob.p][i]].second;
                obj2.w=dis[v[ob.p][i]].first;
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
        cout<<"Case "<<T+1<<": "<<diskta(1,n,v,wt)<<endl;


    }
    return 0;

}
