
#include<bits/stdc++.h>
using namespace std;
int mk=0;
int bfs(int sorce,int n,vector<int>node[30010],vector<int>wet[300010],int ar[])
{
    int vis[n];
    memset(vis,0,sizeof(vis));
    vis[sorce]=1;
    ar[sorce]=0;
    queue<int>q;
   // cout<<"sorce"<<endl;
    q.push(sorce);
    while(!q.empty())
    {
       int fon=q.front();
       q.pop();
       //cout<<"fon="<<fon<<endl;
       for(int i=0;i<node[fon].size();i++)
       {

           if(vis[node[fon][i]]!=1)
           {
               vis[node[fon][i]]=1;
               q.push(node[fon][i]);
               ar[node[fon][i]]=max(ar[node[fon][i]],wet[fon][i]+ar[fon]);
           }
       }
    }

    int first=0;
    mk=0;
    for(int i=0;i<n;i++)
    {
        if(mk<ar[i])
        {
            mk=ar[i];
            first=i;
        }
    }
    //cout<<"mk="<<mk<<endl;
    return first;
}
int main()
{
    int t;
    //cout<<"ss"<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>node[30010];
        vector<int>wet[30010];
        int u,v,w;
        int ar[n];
        memset(ar,0,sizeof(ar));
        for(int j=0;j<n-1;j++)
        {
            cin>>u>>v>>w;
            //cout<<"ss"<<endl;
            node[u].push_back(v);
            node[v].push_back(u);

            wet[u].push_back(w);
            wet[v].push_back(w);

        }
        int first_node=0;
        first_node=bfs(0,n,node,wet,ar);
        int secon_node=0;
        memset(ar,0,sizeof(ar));
        secon_node=bfs(first_node,n,node,wet,ar);
        cout<<"Case "<< i+1<<": "<<mk<<endl;
    }
    return 0;
}
