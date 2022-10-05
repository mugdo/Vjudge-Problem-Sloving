#include<bits/stdc++.h>
using namespace std;
struct ret
{
    int ind;
    int l;
};
ret bfs(int sorce,int n,vector<int>node[],vector<int>wet[])
{
    int vis[n+1];
    int ar[n+1];
    for(int i=0;i<=n;i++)
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
//    freopen("inp.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        //cout<<"n="<<n<<endl;
        vector<int>node[n+1];
        vector<int>wet[n+1];
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
        ret ob1;
        ob1=bfs(ob.ind,n,node,wet);
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
//Solution:https://ideone.com/SlMlmm
//Problem:https://vjudge.net/problem/27120/origin(Visiting Islands)
