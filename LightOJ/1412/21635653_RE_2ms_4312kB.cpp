#include<bits/stdc++.h>
using namespace std;
struct ret
{
    int ind;
    int l;
};
ret bfs(int sorce,int n,vector<int>node[500010],vector<int>wet[500010])
{
    int vis[50010];
    int ar[50010];
    for(int i=0;i<=50010;i++)
    {
        vis[i]=0;
        ar[i]=0;
    }
    vis[sorce]=1;
    ar[sorce]=0;
    queue<int>q;
    //cout<<"sorce="<<sorce<<endl;
    q.push(sorce);
    int lev[n];
    memset(lev,0,sizeof(lev));
    lev[sorce]=0;
    while(!q.empty())
    {
       int fon=q.front();
       q.pop();
      // cout<<"lev["<<fon<<"]="<<lev[fon]<<endl;
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

    ret obj;
    int mk=0;
    for(int i=1;i<=n;i++)
    {
        if(mk<ar[i])
        {
            mk=ar[i];
            obj.ind=i;
            obj.l=lev[i];
            //cout<<"i="<<i<<endl;
        }
    }
   // cout<<"first="<<obj.ind<<endl;
    return obj;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        vector<int>node[50010];
        vector<int>wet[50010];
        int u,v,w;
        w=1;
        for(int j=0;j<m;j++)
        {
            cin>>u>>v;
            node[u].push_back(v);
            node[v].push_back(u);

            wet[u].push_back(w);
            wet[v].push_back(w);

        }
        int first_node=0;
        int secon_node=0;
        ret ob;
        ob=bfs(1,n,node,wet);
        //cout<<"ob.ind="<<ob.ind;
       // cout<<endl;
        //memset(ar,0,sizeof(ar));
        ret ob1;
        ob1=bfs(ob.ind,n,node,wet);
       // cout<<"second_node="<<secon_node<<endl;
        //cout<<"Case "<< i+1<<": "<<mk<<endl;
        //printf("ss=%d\n",secon_node);

        int query=0;
        //cout<<"levl="<<ob1.l<<endl;
        int q;
        cin>>q;
        cout<<"Case "<<i+1<<":"<<endl;
        for(int r=0;r<q;r++)
        {
            cin>>query;
            if(query<=ob1.l+1)
            {
                cout<<query-1<<endl;
            }
            else if(query<=n)
            {
                int temp=0;
                temp+=ob1.l;
                temp+=(query-ob1.l-1)*2;
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