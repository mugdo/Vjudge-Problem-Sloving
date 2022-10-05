#include<bits/stdc++.h>
using namespace std;
int mk=0;
int levl=0;
vector<int>node[50010];
vector<int>wet[50010];
int bfs(int sorce,int n,int ar[])
{
    int vis[n];
    memset(vis,0,sizeof(vis));
    vis[sorce]=1;
    ar[sorce]=0;
    queue<int>q;
   // cout<<"sorce"<<endl;
    q.push(sorce);
    int lev[n];
    memset(lev,0,sizeof(lev));
    lev[sorce]=0;
    while(!q.empty())
    {
       int fon=q.front();
       q.pop();
       //cout<<"lev["<<fon<<"]="<<lev[fon]<<endl;
      // cout<<"node[font].size="<<node[fon].size()<<endl;
       for(int i=0;i<node[fon].size();i++)
       {
           if(vis[node[fon][i]]!=1)
           {
               vis[node[fon][i]]=1;
               lev[node[fon][i]]=lev[fon]+1;
               q.push(node[fon][i]);
               ar[node[fon][i]]=max(ar[node[fon][i]],wet[fon][i]+ar[fon]);
           }
       }
    }

    int first=0;
    mk=0;
    levl=0;
    //cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(mk<ar[i])
        {
            mk=ar[i];
            first=i;
            levl=lev[i];
        }
    }
    //cout<<"mk="<<mk<<endl;
    return first;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int u,v,w;
        w=1;
        int ar[n];
        memset(ar,0,sizeof(ar));
        for(int j=0;j<m;j++)
        {
            cin>>u>>v;
            node[u].push_back(v);
            node[v].push_back(u);

            wet[u].push_back(w);
            wet[v].push_back(w);

        }
        int first_node=0;
        first_node=bfs(1,n,ar);
        //cout<<"first_node="<<first_node<<endl;
        int secon_node=0;

        memset(ar,0,sizeof(ar));
        secon_node=bfs(first_node,n,ar);
        //cout<<"second_node="<<secon_node<<endl;
        //cout<<"Case "<< i+1<<": "<<mk<<endl;
        int q;
        cin>>q;

        int query=0;
        //cout<<"levl="<<levl<<endl;
        cout<<"Case "<<i+1<<":"<<endl;
        for(int r=0;r<q;r++)
        {
            cin>>query;
            if(query<=levl+1)
            {
                cout<<query-1<<endl;
            }
            else if(query<=n)
            {
                int temp=0;
                temp+=levl+1;
                temp+=(query-levl-1)*2;
                cout<<temp<<endl;
            }
            else
            {

                cout<<"impossible"<<endl;
            }
        }
       // cout<<"level="<<levl;
    }
    return 0;
}
//Solution:https://ideone.com/SlMlmm
//Problem:https://vjudge.net/problem/27120/origin(Visiting Islands)
