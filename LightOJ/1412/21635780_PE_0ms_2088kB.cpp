#include<bits/stdc++.h>
using namespace std;
struct ret
{
    int ind;
    int l;
};
ret bfs(int sorce,int n,vector<vector<int> >&node)
{
    int vis[n+5];
    int ar[n+5];
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
       //cout<<"node[font].size="<<node[fon].size()<<endl;
       for(int i=0;i<node[fon].size();i++)
       {
           if(vis[node[fon][i]]!=1)
           {
               vis[node[fon][i]]=1;
               lev[node[fon][i]]=lev[fon]+1;
               q.push(node[fon][i]);
               ar[node[fon][i]]=max(ar[node[fon][i]],1+ar[fon]);
           }
       }
    }

    ret obj;
    int mk=0;
    for(int i=1;i<=n;i++)
    {
        if(mk<=ar[i])
        {
            mk=ar[i];
            obj.ind=i;
            obj.l=lev[i];
            //cout<<"i="<<i<<endl;
        }
    }
    //cout<<"first="<<obj.ind<<endl;
    return obj;
}
int main()
{
//    freopen("inp.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> >node(n+5);
        vector<vector<int> >wet(n+5);
        int u,v;
        for(int j=0;j<m;j++)
        {
            scanf("%d%d",&u,&v);
            node[u].push_back(v);
            node[v].push_back(u);

        }
        int first_node=0;
        int secon_node=0;
        ret ob;
        ob=bfs(1,n,node);
        ret ob1;
        ob1=bfs(ob.ind,n,node);
        int query=0;
        //cout<<"levl="<<ob1.l<<endl;
        int q;
        scanf("%d",&q);
        //cout<<"Case "<<i+1<<":"<<endl;
        printf("Case %d: \n",i+1);
        for(int r=0;r<q;r++)
        {
            scanf("%d",&query);
            if(query<=ob1.l+1)
            {
                printf("%d\n",query-1);
            }
            else if(query<=n)
            {
                int temp=0;
                temp+=ob1.l;
                temp+=(query-ob1.l-1)*2;
                printf("%d\n",temp);
            }
            else
            {
                printf("impossible\n");
            }
        }
       // cout<<"level="<<levl;
    }
    return 0;
}

