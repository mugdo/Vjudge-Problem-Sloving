#include<bits/stdc++.h>
using namespace std;
vector<int>v[3000];
vector<int>va[3000];
int n_value[30000];
int w[10000][10000];
int BFS(int source,int node)
{
    //cout<<"ss"<<endl;
    queue<int>q;
    q.push(source);
    int visited[10010];
    memset(visited,0,sizeof(visited));
    visited[source]=1;


    int m=0;
    memset(n_value,0,sizeof(n_value));
    //cout<<"source="<<source<<endl;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        //cout<<"size="<<v[f].size()<<endl;
        for(int i=0;i<v[f].size();i++)
        {
            //cout<<"child= "<<v[f][i]<<" parent="<<f<<endl;
            //cout<<"visited[v["<<f<<"]["<<i<<"]]="<<visited[v[f][i]]<<endl;
            if(visited[v[f][i]]!=1)
            {
                visited[v[f][i]]=1;
                q.push(v[f][i]);
                cout<<"w[f][i]="<<w[f][v[f][i]]<<endl;
                n_value[v[f][i]]=max(w[f][i],n_value[v[f][i]]);
                //cout<<"n_value[v[f][i]]="<<n_value[v[f][i]]<<endl;
                if(m<n_value[v[f][i]])
                {
                    m=n_value[v[f][i]];
                }

            }
        }
    }
    cout<<"m="<<m<<endl;
    return m;

}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        int ar[n];
        int a,b,c;
        int ck=0;
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            cin>>a>>b;
            cin>>c;
            k=a;
            v[a].push_back(b);
            v[b].push_back(a);
            n_value[a]=0;
            n_value[b]=0;
            w[a][b]=c;

        }
        int next;
        //cout<<"next";

        next=BFS(k,n-1);
        int len;
        len=BFS(next,n-1);
        cout<<"Case "<<t<<": "<<len<<endl;

    }
    return 0;
}
