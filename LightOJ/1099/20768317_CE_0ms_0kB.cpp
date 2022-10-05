#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int w[100][1000];
void diskta(int s,int e)
{
    
}
int main()
{
    int edge,node;
    cin>>edge>>node;
    int a,b,w;
    for(int i=0;i<edge;i++)
    {
        cin>>a>>b>>w;
        v[a].push_back(b);
        v[b].push_back(a);
        w[a][b]=w;
        w[b][a]=w;
        
    }
    diskta(0,edge);
    return 0;
}
